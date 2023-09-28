#ifndef TAKEPASSENGERTICKETFORM_H
#define TAKEPASSENGERTICKETFORM_H

#include <QWidget>
#include "adminmenuwindow.h"

namespace Ui
{
    class TakePassengerTicketForm;
}

class TakePassengerTicketForm : public QWidget // Класс для покупки билетов на пассажирский поезд
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    explicit TakePassengerTicketForm(List<Passenger>*list = nullptr, QString id = ""); // Конструктор класса
    ~TakePassengerTicketForm(); // Деструктор класса

private slots:
    void on_back_clicked(); // Функция-слот для возврата назад

    void on_submit_clicked(); // Функция-слот для подтверждения покупки билета грузового поезда

private:
    Ui::TakePassengerTicketForm *ui; // Указатель на объект класса
    List<Passenger>*list; // Указатель на список пассажирских поездов
    QString id; // Поле класса типа QString для логина пассажира
};

#endif
