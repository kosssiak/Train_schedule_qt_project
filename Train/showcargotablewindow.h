#ifndef SHOWCARGOTABLEWINDOW_H
#define SHOWCARGOTABLEWINDOW_H

#include <QWidget>
#include "adminmenuwindow.h"

namespace Ui
{
class ShowCargoTableWindow;
}

class ShowCargoTableWindow : public QWidget // Класс для показа таблицы грузовых поездов
{
    Q_OBJECT // Базовый класс для всех объектов Qt

public:
    explicit ShowCargoTableWindow(List<Cargo>*list); // Конструктор класса
    ~ShowCargoTableWindow(); // Деструктор класса

private slots:
    void on_back_clicked(); // Функция-слот для возврата назад

private:
    Ui::ShowCargoTableWindow *ui; // Указатель на объект класса
};

#endif
