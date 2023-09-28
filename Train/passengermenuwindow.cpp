#include "passengermenuwindow.h"
#include "ui_passengermenuwindow.h"
#include "takepassengerticketform.h"
#include "takecargoticketform.h"
#include "clickException.h"

PassengerMenuWindow::PassengerMenuWindow(int variant, QString id) : ui(new Ui::PassengerMenuWindow), variant(variant), id(id)
{
    ui->setupUi(this);
    listC = new List<Cargo>();
    listP = new List<Passenger>();
    File::openCargo(listC, "cargo.txt");
    File::openPassenger(listP, "passenger.txt");
}

PassengerMenuWindow::~PassengerMenuWindow()
{
    delete ui;
}

void PassengerMenuWindow::on_back_clicked()
{
    MenuWindow *w = new MenuWindow(2,id);
    w->setVisible(true);
    this->close();
    delete this;
}

void PassengerMenuWindow::on_takeTicket_clicked()
{
    if (variant != 1)
    {
        TakePassengerTicketForm*w = new TakePassengerTicketForm(listP, id);
        w->setVisible(true);
    }
    else
    {
        TakeCargoTicketForm*w = new TakeCargoTicketForm(listC, id);
        w->setVisible(true);
    }
}

void PassengerMenuWindow::on_cancel_clicked()
{
    if (variant != 1)
    {
        try
        {
            List<Trip> *trips = new List<Trip>();
            string str = id.toStdString() + "P.txt";
            File::openTrip(trips, str.c_str());
            if (trips->size() < 1)
            {
                throw ClickException(Except::inabilityCancelPurchase, this, "Невозможно отменить покупку!");
                return;
            }
            Trip trip = trips->pop();
            File::saveTrip(trips, str.c_str());
            QMessageBox::information(nullptr, "Отмена покупки", "Вы отменили покупку билета!");
            for (Iterator it = listP->begin(); it != listP->end() + 1; ++it)
            {
                if(it.getPtr() == nullptr)
                {
                    break;
                }
                if ((*it).getId() == trip.getId())
                {
                    (*it).setNumberOfFreeSeats((*it).getNumberOfFreeSeats() + trip.getNumberOfFreeSeats());
                    File::savePassenger(listP, "passenger.txt");
                }
            }
        }
        catch(ClickException<PassengerMenuWindow> &obj)
        {
            obj.show();
            return;
        }
    }
    else
    {
        try
        {
            List<Trip> *trips = new List<Trip>();
            string str = id.toStdString() + "C.txt";
            File::openTrip(trips, str.c_str());
            if (trips->size() < 1)
            {
                throw ClickException(Except::inabilityCancelPurchase, this, "Невозможно отменить покупку!");
                return;
            }
            Trip trip = trips->pop();
            File::saveTrip(trips, str.c_str());
            QMessageBox::information(nullptr, "Отмена покупки", "Вы отменили покупку билета!");
            for (Iterator it = listC->begin(); it != listC->end() + 1; ++it)
            {
                if(it.getPtr() == nullptr)
                {
                    break;
                }
                if ((*it).getId() == trip.getId())
                {
                    (*it).setNumberOfFreeSeats((*it).getNumberOfFreeSeats() + trip.getNumberOfFreeSeats());
                    File::saveCargo(listC, "cargo.txt");
                }
            }
        }
        catch(ClickException<PassengerMenuWindow> &obj)
        {
            obj.show();
            return;
        }
    }
}
