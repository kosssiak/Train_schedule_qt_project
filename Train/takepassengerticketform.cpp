#include "takepassengerticketform.h"
#include "ui_takepassengerticketform.h"
#include "clickException.h"

TakePassengerTicketForm::TakePassengerTicketForm(List<Passenger> *list, QString id) : list(list), id(id), ui(new Ui::TakePassengerTicketForm)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(12);
    QTableWidgetItem *w = new QTableWidgetItem("Номер поезда");
    ui->tableWidget->setHorizontalHeaderItem(0, w);
    ui->tableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Тип места"));
    ui->tableWidget->setHorizontalHeaderItem(2, new QTableWidgetItem("Количество свободных мест"));
    ui->tableWidget->setHorizontalHeaderItem(3, new QTableWidgetItem("Цена"));
    ui->tableWidget->setHorizontalHeaderItem(4, new QTableWidgetItem("Пункт назначения"));
    ui->tableWidget->setHorizontalHeaderItem(5, new QTableWidgetItem("Пн"));
    ui->tableWidget->setHorizontalHeaderItem(6, new QTableWidgetItem("Вт"));
    ui->tableWidget->setHorizontalHeaderItem(7, new QTableWidgetItem("Ср"));
    ui->tableWidget->setHorizontalHeaderItem(8, new QTableWidgetItem("Чт"));
    ui->tableWidget->setHorizontalHeaderItem(9, new QTableWidgetItem("Пт"));
    ui->tableWidget->setHorizontalHeaderItem(10, new QTableWidgetItem("Сб"));
    ui->tableWidget->setHorizontalHeaderItem(11, new QTableWidgetItem("Вс"));
    ui->number->setMinimum(0);
    ui->tableWidget->setShowGrid(true);

    int i = 0;
    for (Iterator it = list->begin(); it != list->end() + 1; ++it)
    {
        if(it.getPtr() == nullptr)
        {
            break;
        }
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number((*it).getId())));
        QString type;
        switch ((*it).getClassOfTickets())
        {
            case 1:
            {
                type = "Бизнес";
                break;
            }
            case 2:
            {
                type = "Купе";
                break;
            }
            case 3:
            {
                type = "Плацкарт";
                break;
            }
        }
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(type));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number((*it).getNumberOfFreeSeats())));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number((*it).getPrice())));
        QString str;
        switch ((*it).getDestination())
        {
            case 1:
            {
                str = "Россия";
                break;
            }
            case 2:
            {
                str = "Китай";
                break;
            }
            case 3:
            {
                str = "Польша";
                break;
            }
            case 4:
            {
                str = "Украина";
                break;
            }
            case 5:
            {
                str = "Другая страна";
                break;
            }
        }
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(str));
        for (int j = 0; j < 7; j++)
        {
            switch((*it).getTimetable()[j])
            {
                case 0:
                {
                    ui->tableWidget->setItem(i, 5 + j, new QTableWidgetItem("-"));
                    break;
                }
                case 1:
                {
                    ui->tableWidget->setItem(i, 5 + j, new QTableWidgetItem("+"));
                }
            }
        }
        i++;
    }
    ui->tableWidget->resizeColumnsToContents();
    ui->spinBox->setMinimum(1);
    ui->spinBox->setMaximum(list->size());
}

TakePassengerTicketForm::~TakePassengerTicketForm()
{
    delete ui;
}

void TakePassengerTicketForm::on_submit_clicked()
{
    try
    {
        int number = ui->spinBox->text().toInt() - 1;
        if(ui->number->text().toInt() == 0 && list->size() != 0)
        {
            throw ClickException(Except::zeroTickets, this, "Введите верное количество билетов (более 0)!");
            return;
        }
        if(list->size() == 0)
        {
            throw ClickException(Except::emptyList, this, "Поезда отсутствуют!");
            return;
        }     
        if (list->operator[](number).getNumberOfFreeSeats() - ui->number->text().toInt() < 0)
        {
            throw ClickException(Except::zeroFreeSeats, this, "Все места заняты!");
            return;
        }
        if (list->operator[](number).getNumberOfFreeSeats() == 0)
        {
            throw ClickException(Except::zeroFreeSeats, this, "Все места заняты!");
            return;
        }
        List<Trip> *trips = new List<Trip>();
        string str = id.toStdString() + "P.txt";
        File::openTrip(trips, str.c_str());
        Trip trip(list->operator[](number).getId(), list->operator[](number).getPrice(), list->operator[](number).getDestination(), ui->number->text().toInt());
        trips->push(trip);
        File::saveTrip(trips, str.c_str());
        QMessageBox::information(nullptr, "Взятие билета", "Вы успешно купили " + ui->number->text() + " билетов");
        list->operator[](number).setNumberOfFreeSeats(list->operator[](number).getNumberOfFreeSeats() - ui->number->text().toInt());
        ui->tableWidget->setItem(number, 2, new QTableWidgetItem(QString::number(list->operator[](number).getNumberOfFreeSeats())));
        File::savePassenger(list, "passenger.txt");
    }
    catch(ClickException<TakePassengerTicketForm> &obj)
    {
        obj.show();
        return;
    }
}

void TakePassengerTicketForm::on_back_clicked()
{
    this->close();
    delete this;
}
