#ifndef SHOWPASSENGERTABLEWINDOW_H
#define SHOWPASSENGERTABLEWINDOW_H

#include <QWidget>
#include "adminmenuwindow.h"

namespace Ui
{
class ShowPassengerTableWindow;
}

class ShowPassengerTableWindow : public QWidget // Класс для показа таблицы пассажирских поездов
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    explicit ShowPassengerTableWindow(List<Passenger>*list); // Конструктор класса
    ~ShowPassengerTableWindow(); // Деструктор класса

private slots:
    void on_back_clicked(); // Функция-слот для возврата назад

private:
    Ui::ShowPassengerTableWindow *ui; // Указатель на объект класса
};

#endif
