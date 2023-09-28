#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menuwindow.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow // Класс для главного окна программы
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    MainWindow(QWidget *parent = nullptr); // Конструктор класса
    ~MainWindow(); // Деструктор класса

private slots:
    void on_exit_clicked(); // Функция-слот для выхода из программы

    void on_passengerB_clicked(); // Функция-слот для входа пользователя

    void on_admin_clicked(); // Функция-слот для входа администратора

private:
    Ui::MainWindow *ui; // Указатель на объект класса
    QString id; // Поле класса типа QString для логина пассажира
};

#endif
