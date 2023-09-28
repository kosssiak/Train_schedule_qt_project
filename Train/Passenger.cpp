#include "Passenger.h"

Passenger::Passenger(int id, int price, int destination, int numberOfFreeSeats,
                     int classOfTickets, bool* timetable) : Trip(id, price, destination, numberOfFreeSeats), classOfTickets(classOfTickets), timetable(timetable) {}

bool* Passenger::getTimetable() const
{
    return timetable;
}

void Passenger::setTimetable(bool* timetable)
{
    this->timetable = new bool[7];
    for (int i = 0; i < 7; i++)
    {
        this->timetable[i] = timetable[i];
    }
}

int Passenger::getClassOfTickets() const
{
    return classOfTickets;
}

void Passenger::setClassOfTickets(int classOfTickets)
{
    Passenger::classOfTickets = classOfTickets;
}
