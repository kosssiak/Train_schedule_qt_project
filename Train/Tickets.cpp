#include "Tickets.h"

Tickets::Tickets(int id, int price) : id(id), price(price) {}

int Tickets::getId() const
{
    return id;
}

void Tickets::setId(int id)
{
    Tickets::id = id;
}

int Tickets::getPrice() const
{
    return price;
}

void Tickets::setPrice(int price)
{
    Tickets::price = price;
}
