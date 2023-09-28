#ifndef TICKETS_H
#define TICKETS_H

class Tickets // Класс для билетов на поезд
{
protected:
    int id; // Поле класса типа int для номера рейса
    int price; // Поле класса типа int для цены рейса
public:
    explicit Tickets(int id = 0, int price = 0); // Конструктор класса

    int getId() const; // Метод класса для получения номера рейса
    void setId(int id); // Метод класса для установки номера рейса
    int getPrice() const; // Метод класса для получения цены рейса
    void setPrice(int price); // Метод класса для установки цены рейса
};

#endif
