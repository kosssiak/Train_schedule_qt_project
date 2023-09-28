#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"
#include "adminmenuwindow.h"
#include "passengermenuwindow.h"

namespace Ui
{
    class MenuWindow;
}

class MenuWindow : public QMainWindow // Класс для меню программы (выбор между пассажирскими и грузовыми поездами)
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    explicit MenuWindow(int variant = 0, QString id = ""); // Конструктор класса
    ~MenuWindow(); // Деструктор класса

private slots:
    void on_back_clicked(); // Функция-слот для возврата назад

    void on_cargo_clicked(); // Функция-слот для перехода к грузовым поездам

    void on_passenger_clicked(); // Функция-слот для перехода к пассажирским поездам

private:
    Ui::MenuWindow *ui; // Указатель на объект класса
    int variant; // Поле класса типа int для отображения меню разного типа (пассажирские/грузовые)
    QString id; // Поле класса типа QString для логина пассажира
};

#endif
