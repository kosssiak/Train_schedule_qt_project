#ifndef CLICKEXCEPTION_H
#define CLICKEXCEPTION_H

#include "Exception.h"

template <class T>
class ClickException : public Exception // Шаблонный класс для исключений при кликах на кнопки в программе (отправление форм, отмена, удаление)
{
    T* window; // Поле шаблонного класса типа T* для окна

public:
    ClickException<T>(Except code, T* window, QString message); // Конструктор шаблонного класса

    void show() override; // Метод класса для отображения ошибки
};

template <class T>
ClickException<T>::ClickException(Except code, T* window, QString message)
{
    this->code = code;
    this->window = window;
    this->message = message;
}

template <class T>
void ClickException<T>::show()
{
    QMessageBox::warning(window, "Ошибка " + QString::number((int)code), message);
}

#endif

