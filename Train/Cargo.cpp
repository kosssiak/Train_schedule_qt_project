#include "Cargo.h"

Cargo::Cargo(int id, int price, int destination, int numberOfFreeSeats, int carryingCapacity,
             bool* timetable) : Trip(id, price, destination, numberOfFreeSeats), carryingCapacity(carryingCapacity), timetable(timetable) {}

int Cargo::getCarryingCapacity() const
{
    return carryingCapacity;
}

void Cargo::setCarryingCapacity(int carryingCapacity)
{
    Cargo::carryingCapacity = carryingCapacity;
}

bool *Cargo::getTimetable() const
{
    return timetable;
}

void Cargo::setTimetable(bool *timetable)
{
    this->timetable = new bool[7];
    for (int i = 0; i < 7; i++)
    {
        this->timetable[i] = timetable[i];
    }
}
