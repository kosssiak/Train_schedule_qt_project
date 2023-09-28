#ifndef ADDCARGOFORM_H
#define ADDCARGOFORM_H

#include <QWidget>
#include <QIntValidator>
#include "adminmenuwindow.h"

namespace Ui
{
class AddCargoForm;
}

class AddCargoForm : public QWidget // Класс для добавления грузового поезда
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    explicit AddCargoForm(List<Cargo>* list); // Конструктор класса
    ~AddCargoForm(); // Деструктор класса

private slots:
    void on_submit_clicked(); // Функция-слот для подтверждения добавления грузового поезда

    void on_back_clicked(); // Функция-слот для возврата назад

private:
    Ui::AddCargoForm *ui; // Указатель на объект класса
    List<Cargo>* list; // Указатель на список грузовых поездов
};

#endif
