#include "showpassengertablewindow.h"
#include "ui_showpassengertablewindow.h"

ShowPassengerTableWindow::ShowPassengerTableWindow(List<Passenger>* list) : ui(new Ui::ShowPassengerTableWindow)
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
                case 1: {
                    ui->tableWidget->setItem(i, 5 + j, new QTableWidgetItem("+"));
                }
            }
        }
        i++;
    }
    ui->tableWidget->resizeColumnsToContents();
}

ShowPassengerTableWindow::~ShowPassengerTableWindow()
{
    delete ui;
}

void ShowPassengerTableWindow::on_back_clicked()
{
    this->close();
    delete this;
}
