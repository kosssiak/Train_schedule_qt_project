#ifndef CARGO_H
#define CARGO_H

#include "Trip.h"

class Cargo : public Trip // Класс для грузовых поездов
{
private:
    int carryingCapacity; // Поле класса типа int для грузоподъёмности
    bool* timetable; // Поле класса типа bool* для расписания
public:
     explicit Cargo (int id = 0, int price = 0, int destination = 0, int numberOfFreeSeats = 0, // Конструктор класса
            int carryingCapacity = 0, bool* timetable = nullptr);

    int getCarryingCapacity() const; // Метод класса для получения грузоподъёмности
    void setCarryingCapacity(int carryingCapacity); // Метод класса для установки грузоподъёмности
    bool *getTimetable() const; // Метод класса для получения расписания
    void setTimetable(bool *timetable); // Метод класса для установки расписания
};

#endif
