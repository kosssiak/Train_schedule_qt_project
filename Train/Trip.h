#ifndef TRIP_H
#define TRIP_H

#include "Tickets.h"

class Trip : public Tickets // Класс для рейсов
{
protected:
    int destination; // Поле класса типа int для пункта назначения
    int numberOfFreeSeats; // Поле класса типа int для количества свободных мест
public:
    explicit Trip (int id = 0, int price = 0, int destination = 0, int numberOfFreeSeats = 0); // Конструктор класса

    int getDestination() const; // Метод класса для получения пункта назначения
    void setDestination(int destination); // Метод класса для установки пункта назначения
    int getNumberOfFreeSeats() const; // Метод класса для получения количества свободных мест
    void setNumberOfFreeSeats(int numberOfFreeSeats); // Метод класса для установки количества свободных мест
};

#endif
