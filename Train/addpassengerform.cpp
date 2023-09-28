#include "addpassengerform.h"
#include "ui_addpassengerform.h"
#include "clickException.h"

AddPassengerForm::AddPassengerForm(List<Passenger>* list) : list(list), ui(new Ui::AddPassengerForm)
{
    ui->setupUi(this);
    ui->destination->setMinimum(1);
    ui->destination->setMaximum(5);
    ui->class_2->setMinimum(1);
    ui->class_2->setMaximum(3);
}

AddPassengerForm::~AddPassengerForm()
{
    delete ui;
}

void AddPassengerForm::on_submit_clicked()
{
    try
    {
        bool*timetable = new bool[7];
        if (ui->monday->isChecked() == false &&
            ui->tuesday->isChecked() == false &&
            ui->wednesday->isChecked() == false &&
            ui->thurtday->isChecked() == false &&
            ui->friday->isChecked() == false &&
            ui->saturday->isChecked() == false &&
            ui->sunday->isChecked() == false)
        {
            throw ClickException(Except::zeroDays, this, "Поезд должен ходить хотя бы в один из дней недели!");
            return;
        }
        timetable[0] = ui->monday->isChecked();
        timetable[1] = ui->tuesday->isChecked();
        timetable[2] = ui->wednesday->isChecked();
        timetable[3] = ui->thurtday->isChecked();
        timetable[4] = ui->friday->isChecked();
        timetable[5] = ui->saturday->isChecked();
        timetable[6] = ui->sunday->isChecked();
        if (ui->numberOfSeats->text().toInt() == 0)
        {
            throw ClickException(Except::zeroFreeSeats, this, "Введите правильно количество свободных мест(более 0)!");
            return;
        }
        int freeSeats = ui->numberOfSeats->text().toInt();
        int id = ui->id->text().toInt();
        if (ui->id->text().toInt() == 0)
        {
            throw ClickException(Except::zeroId, this, "Введите правильно номер поезда(более 0)!");
            return;
        }
        int destination = ui->destination->text().toInt();
        int Class = ui->class_2->text().toInt();
        if (ui->price->text().toInt() == 0)
        {
            throw ClickException(Except::zeroPrice, this, "Введите правильную цену для рейса(более 0)!");
            return;
        }
        int price = ui->price->text().toInt();
        Passenger *passenger = new Passenger(id, price, destination, freeSeats, Class, timetable);
        list->push(*passenger);
        File::savePassenger(list, "passenger.txt");
        QMessageBox::information(nullptr, "Добавление пассажирского поезда", "Пассажирский поезд успешно добавлен!");
        this->close();
        delete this;
    }
    catch(ClickException<AddPassengerForm> &obj)
    {
        obj.show();
        return;
    }
}

void AddPassengerForm::on_back_clicked()
{
    this->close();
    delete this;
}
