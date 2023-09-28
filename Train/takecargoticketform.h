#ifndef TAKECARGOTICKETFORM_H
#define TAKECARGOTICKETFORM_H

#include <QWidget>
#include "adminmenuwindow.h"

namespace Ui
{
    class TakeCargoTicketForm;
}

class TakeCargoTicketForm : public QWidget // Класс для покупки билетов на грузовой поезд
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    explicit TakeCargoTicketForm(List<Cargo>*list = nullptr, QString id = ""); // Конструктор класса
    ~TakeCargoTicketForm(); // Деструктор класса

private slots:
    void on_back_clicked(); // Функция-слот для возврата назад

    void on_submit_clicked(); // Функция-слот для подтверждения покупки билета грузового поезда

private:
    Ui::TakeCargoTicketForm *ui; // Указатель на объект класса
    List<Cargo> *list; // Указатель на список грузовых поездов
    QString id; // Поле класса типа QString для логина пассажира
};

#endif
