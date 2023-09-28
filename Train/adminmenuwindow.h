#ifndef ADMINMENUWINDOW_H
#define ADMINMENUWINDOW_H

#include <QMainWindow>
#include "File.h"
#include "List.h"
#include "Cargo.h"
#include "Passenger.h"
#include "menuwindow.h"
#include <QMessageBox>
#include "addpassengerform.h"
#include "addcargoform.h"

namespace Ui
{
class AdminMenuWindow;
}

class AdminMenuWindow : public QMainWindow // Класс для меню администратора
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    explicit AdminMenuWindow(int type = 0); // Конструктор класса
    ~AdminMenuWindow(); // Деструктор класса

private slots:

    void on_back_clicked(); // Функция-слот для возврата назад

    void on_delete_2_clicked(); // Функция-слот для удаления последнего рейса

    void on_add_clicked(); // Функция-слот для добавления рейсов

    void on_Look_clicked(); // Функция-слот для просмотра рейсов

private:
    Ui::AdminMenuWindow *ui; // Указатель на объект класса
    int type; // Поле класса типа int для выбора типа поездов для операций с ними (пассажирские/грузовые)
    List<Passenger>* listP; // Указатель на список пассажирских поездов
    List<Cargo>* listC; // Указатель на список грузовых поездов
};

#endif
