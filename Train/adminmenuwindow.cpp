#include "adminmenuwindow.h"
#include "ui_adminmenuwindow.h"
#include "showcargotablewindow.h"
#include "showpassengertablewindow.h"
#include "clickException.h"

AdminMenuWindow::AdminMenuWindow(int type) : ui(new Ui::AdminMenuWindow), type(type)
{
    ui->setupUi(this);
    listC = new List<Cargo>();
    listP = new List<Passenger>();
    File::openCargo(listC, "cargo.txt");
    File::openPassenger(listP, "passenger.txt");
}

AdminMenuWindow::~AdminMenuWindow()
{
    delete ui;
}


void AdminMenuWindow::on_back_clicked()
{
    File::saveCargo(listC, "cargo.txt");
    File::savePassenger(listP, "passenger.txt");
    MenuWindow *w = new MenuWindow(1);
    w->setVisible(true);
    this->close();
    delete this;
}

void AdminMenuWindow::on_delete_2_clicked()
{
    if (type == 1)
    {
        try
        {
            if (listC->size() < 1)
            {
                throw ClickException(Except::emptyList, this, "Поезда отсутствуют!");
            }
            else
            {
                listC->pop();
                File::saveCargo(listC, "cargo.txt");
                QMessageBox::information(nullptr, "Удаление грузового поезда", "Вы удалили поезд.");
            }
        }
        catch(ClickException<AdminMenuWindow> &obj)
        {
            obj.show();
            return;
        }
    }
    else
    {
        try
        {
            if (listP->size() < 1)
            {
                throw ClickException(Except::emptyList, this, "Поезда отсутствуют!");
            }
            else
            {
                listP->pop();
                File::savePassenger(listP, "passenger.txt");
                QMessageBox::information(nullptr, "Удаление пассажирского поезда", "Вы удалили поезд.");
            }
        }
        catch(ClickException<AdminMenuWindow> &obj)
        {
            obj.show();
            return;
        }
    }
}

void AdminMenuWindow::on_add_clicked()
{
    if (type == 1)
    {
        AddCargoForm *w = new AddCargoForm(listC);
        w->setVisible(true);
    }
    else
    {
        AddPassengerForm* w = new AddPassengerForm(listP);
        w->setVisible(true);
    }
}

void AdminMenuWindow::on_Look_clicked()
{
    if (type == 1)
    {
        ShowCargoTableWindow *w = new ShowCargoTableWindow(listC);
        w->setVisible(true);
    }
    else
    {
        ShowPassengerTableWindow*w = new ShowPassengerTableWindow(listP);
        w->setVisible(true);
    }
}
