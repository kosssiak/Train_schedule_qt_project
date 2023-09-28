#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <QString>
#include <QMessageBox>

enum class Except  // Класс для кодов ошибок
{
    emptyLines = 100, // Код ошибки при незаполненном поле
    inabilityCancelPurchase = 101, // Код ошибки при невозможности отмены
    emptyList = 102, // Код ошибки при пустом контейнере
    zeroFreeSeats = 103, // Код ошибки при отсутствии свободных мест
    zeroPrice = 104, // Код ошибки при неправильном вводе цены
    zeroDays = 105, // Код ошибки при неправильном вводе расписания
    zeroCapacity = 106, // Код ошибки при неправильном вводе грузоподъёмности
    zeroId = 107, // Код ошибки при неправильном вводе номера рейса
    zeroTickets = 108 // Код ошибки при неправильном вводе количества билетов
};

class Exception // Класс для исключений
{
protected:
    Except code; // Поле класса типа Except для кодов ошибок
    QString message; // Поле класса типа QString для сообщения об ошибке
    virtual void show() = 0; // Виртуальный метод класса для показа ошибки
};

#endif
