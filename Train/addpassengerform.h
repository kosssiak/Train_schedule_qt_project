#ifndef ADDPASSENGERFORM_H
#define ADDPASSENGERFORM_H

#include <QWidget>
#include <QIntValidator>
#include "adminmenuwindow.h"

namespace Ui
{
class AddPassengerForm;
}

class AddPassengerForm : public QWidget // Класс для добавления пассажирского поезда
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    explicit AddPassengerForm(List<Passenger>* list); // Конструктор класса
    ~AddPassengerForm(); // Деструктор класса

private slots:
    void on_submit_clicked(); // Функция-слот для подтверждения добавления грузового поезда

    void on_back_clicked(); // Функция-слот для возврата назад

private:
    Ui::AddPassengerForm *ui; // Указатель на объект класса
    List<Passenger>* list; // Указатель на список пассажирских поездов
};

#endif
