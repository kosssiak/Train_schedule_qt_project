#ifndef FILE_H
#define FILE_H

#include "List.h"
#include "Cargo.h"
#include "Passenger.h"
#include <fstream>
#include <QString>
#include <iomanip>
using namespace std;

class File { // Класс для работы с файлами
public:
    static void openCargo(List<Cargo> *list, const char *file) { // Метод класса для считывания грузовых рейсов с файла
        ifstream in;
        in.open(file);
        if (!in.is_open()) {
            return;
        }
        int val1, val2, val3, val4, val5;
        while(EOF) {
            bool *val6 = new bool[7];
            in >> val1;
            if (!in) {
                break;
            }
            in >> val2 >> val3 >> val4 >> val5;
            for (int i = 0; i < 7; i++) {
                in >> val6[i];
            }
            Cargo cargo(val1, val2, val3, val4, val5, val6);
            list->push(cargo);
        }
        in.close();
    }

    static void saveCargo(List<Cargo> *list, const char *file) { // Метод класса для сохранения грузовых рейсов в файл
        ofstream on;
        on.open(file, std::ios_base::out);
        if (!on.is_open()) {
            return;
        }
        for (Iterator it = list->begin(); it != list->end() + 1; ++it) {
            if(it.getPtr() == nullptr)
            {
                break;
            }
            on << setw(20) << (*it).getId() << setw(20) << (*it).getPrice() <<
                  setw(20) << (*it).getDestination() << setw(20) << (*it).getNumberOfFreeSeats() <<
                  setw(20) << (*it).getCarryingCapacity();
            for (int j = 0; j < 7; j++) {
                on << " " << (*it).getTimetable()[j];
            }
            on << std::endl;
        }
        on << "%";
        on.close();
    }

    static void openPassenger(List<Passenger> *list, const char *file) { // Метод класса для считывания пассажирских рейсов с файла
        ifstream in;
        in.open(file);
        if (!in.is_open()) {
            return;
        }
        int val1, val2, val3, val4, val5;
        while(EOF) {
            bool *val6 = new bool[7];
            in >> val1;
            if (!in) {
                break;
            }
            in >> val2 >> val3 >> val4;
            for (int i = 0; i < 7; i++) {
                in >> val6[i];
            }
            in >> val5;
            Passenger passenger(val1, val2, val3, val4, val5, val6);
            list->push(passenger);
        }
        in.close();
    }

    static void savePassenger(List<Passenger> *list, const char *file) { // Метод класса для сохранения пассажирских рейсов в файл
        ofstream on;
        on.open(file, std::ios_base::out);
        if (!on.is_open()) {
            return;
        }
        for (Iterator it = list->begin(); it != list->end() + 1; ++it) {
            if(it.getPtr() == nullptr)
            {
                break;
            }
            on << setw(20) << (*it).getId() << setw(20) << (*it).getPrice() <<
                  setw(20) << (*it).getDestination() << setw(20) << (*it).getNumberOfFreeSeats();
            for (int j = 0; j < 7; j++) {
                on << " " << (*it).getTimetable()[j];
            }
            on << setw(20) << (*it).getClassOfTickets();
            on << std::endl;
        }
        on << "%";
        on.close();
    }


    static void openTrip(List<Trip> *list, const char *file) { // Метод класса для считывания билетов пассажира с файла
        ifstream in;
        in.open(file);
        if (!in.is_open()) {
            return;
        }
        int val1, val2, val3, val4;
        while(EOF) {
            in >> val1;
            if (!in) {
                break;
            }
            in >> val2 >> val3 >> val4;
            Trip trip(val1, val2, val3, val4);
            list->push(trip);
        }
        in.close();
    }

    static void saveTrip(List<Trip> *list, const char *file) { // Метод класса для сохранения билетов пассажира в файл
        ofstream on;
        on.open(file, std::ios_base::out);
        if (!on.is_open()) {
            return;
        }
        for (Iterator it = list->end(); it != list->begin() - 1; --it)
        {
            if(it.getPtr() == nullptr)
            {
                break;
            }
            on << setw(20) << (*it).getId() << setw(20) << (*it).getPrice() <<
                  setw(20) << (*it).getDestination() << setw(20) << (*it).getNumberOfFreeSeats();
            on << std::endl;
        }
        on << "%";
        on.close();
    }

    static void openUser(List<QString> *list, const char *file) { // Метод класса для считывания пользователей с файла
        ifstream in;
        in.open(file);
        if (!in.is_open()) {
            return;
        }
        string val;
        while(EOF) {
            in >> val;
            if (!in || val == "%") {
                break;
            }
            in.get();
            QString std = QString::fromStdString(val);
            list->push(std);
        }
        in.close();
    }

    static void saveUser(List<QString> *list, const char *file) { // Метод класса для сохранения пользователей в файл
        ofstream on;
        on.open(file, std::ios_base::out);
        if (!on.is_open()) {
            return;
        }
        for (int i = 0; i < list->size(); i++) {
            on << list->operator[](i).toStdString();
            on << std::endl;
        }
        on << "%";
        on.close();
    }
};

#endif


