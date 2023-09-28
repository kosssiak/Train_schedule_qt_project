#include "Trip.h"

Trip::Trip(int id, int price, int destination , int numberOfFreeSeats) : Tickets(id, price), destination(destination), numberOfFreeSeats(numberOfFreeSeats) {}

int Trip::getDestination() const
{
    return destination;
}

void Trip::setDestination(int destination)
{
    Trip::destination = destination;
}

int Trip::getNumberOfFreeSeats() const
{
    return numberOfFreeSeats;
}

void Trip::setNumberOfFreeSeats(int numberOfFreeSeats)
{
    Trip::numberOfFreeSeats = numberOfFreeSeats;
}
