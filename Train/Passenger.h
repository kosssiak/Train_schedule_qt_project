#ifndef PASSENGER_H
#define PASSENGER_H
#include "Trip.h"

class Passenger: public Trip // Класс для пассажира
{
private:
    bool* timetable; // Поле класса типа bool* для расписания
    int classOfTickets; // Поле класса типа int для типа билетов пассажиров
public:
    explicit Passenger (int id = 0, int price = 0, int destination = 0, int numberOfFreeSeats = 0, // Конструктор класса
            int classOfTickets = 0, bool* timetable=nullptr);

    bool* getTimetable() const; // Метод класса для получения расписания
    void setTimetable(bool* timetable); // Метод класса для установки расписания
    int getClassOfTickets() const; // Метод класса для получения типа билетов
    void setClassOfTickets(int classOfTickets); // Метод класса для установки типа билетов
};

#endif
