#ifndef PASSENGERMENUWINDOW_H
#define PASSENGERMENUWINDOW_H

#include <QMainWindow>
#include "menuwindow.h"

namespace Ui
{
    class PassengerMenuWindow;
}

class PassengerMenuWindow : public QMainWindow // Класс для меню пассажира (покупка билета, отмена последнего действия)
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    explicit PassengerMenuWindow(int variant = 0, QString id = ""); // Конструктор класса
    ~PassengerMenuWindow(); // Деструктор класса

private slots:
    void on_back_clicked(); // Функция-слот для возврата назад

    void on_takeTicket_clicked(); // Функция-слот для покупки билета

    void on_cancel_clicked(); // Функция-слот для отмены последнего действия

private:
    Ui::PassengerMenuWindow *ui; // Указатель на объект класса
    int variant; // Поле класса типа int для отображения формы покупки разного типа (пассажирские/грузовые)
    QString id; // Поле класса типа QString для логина пассажира
    List<Passenger>* listP; // Указатель на список пассажирских поездов
    List<Cargo>* listC; // Указатель на список грузовых поездов
};

#endif
