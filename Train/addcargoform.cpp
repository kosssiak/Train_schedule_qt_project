#include "addcargoform.h"
#include "ui_addcargoform.h"
#include "clickException.h"

AddCargoForm::AddCargoForm(List<Cargo>*list) : list(list), ui(new Ui::AddCargoForm)
{
    ui->setupUi(this);
    ui->destination->setMinimum(1);
    ui->destination->setMaximum(5);
}

AddCargoForm::~AddCargoForm()
{
    delete ui;
}

void AddCargoForm::on_submit_clicked()
{
    try{
        bool *timetable = new bool[7];
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
        if (ui->id->text().toInt() == 0)
        {
            throw ClickException(Except::zeroId, this, "Введите правильно номер поезда(более 0)!");
            return;
        }
        int id = ui->id->text().toInt();
        int destination = ui->destination->text().toInt();
        if (ui->capacity->text().toInt() == 0)
        {
            throw ClickException(Except::zeroCapacity, this, "Введите правильную грузоподъёмность поезда(более 0)!");
            return;
        }
        int capacity = ui->capacity->text().toInt();
        if (ui->price->text().toInt() == 0)
        {
            throw ClickException(Except::zeroPrice, this, "Введите правильную цену для рейса(более 0)!");
            return;
        }
        int price = ui->price->text().toInt();
        Cargo *cargo = new Cargo(id, price, destination, freeSeats, capacity, timetable);
        list->push(*cargo);
        File::saveCargo(list, "cargo.txt");
        QMessageBox::information(nullptr, "Добавление грузового поезда", "Грузовой поезд успешно добавлен!");
        this->close();
        delete this;
    }
    catch(ClickException<AddCargoForm> &obj)
    {
        obj.show();
        return;
    }
}

void AddCargoForm::on_back_clicked()
{
    this->close();
    delete this;
}
