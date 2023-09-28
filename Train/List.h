#ifndef LIST_H
#define LIST_H

template <class T>
struct Node  // Шаблонная структура узла контейнера List
{
    T data; // Поле структуры типа T для хранения данных
    Node<T>* previous; // Поле структуры типа Node<T>* для указателя на предыдущий элемент
    Node<T>* next; // Поле структуры типа Node<T>* для указателя на следующий элемент
};

template <class T>
class List // Шаблонный класс для контейнера List (список)
{
private:
    Node<T> *head = nullptr; // Указатель на голову списка
    Node<T> *tail = nullptr; // Указатель на хвост списка
    int amount = 0; // Количество элементов списка
public:
    List() {}; // Конструктор класса
    ~List(); // Деструктор класса
    int size(); // Шаблонный метод класса для получения количества элементов списка
    void push(T&); // Шаблонный метод класса для добавления элемента
    T pop(); // Шаблонный метод класса для удаления элемента
    T& operator[](int); // Перегрузка оператора [] для обращения к элементу списка по индексу
    Node<T>* begin(); // Шаблонный метод для получения головы списка
    Node<T>* end(); // Шаблонный метод для получения хвоста списка
};

template<class T>
void List<T>::push(T& obj)
{
    if (head == nullptr)
    {
        head = new Node<T>;
        head->data = obj;
        head->next = nullptr;
        head->previous = nullptr;
        tail = head;
        amount++;
    }
    else
    {
        Node<T> *node = new Node<T>;
        node->data = obj;
        node->next = head;
        node->previous = nullptr;
        head->previous = node;
        head = node;
        amount++;
    }
}

template<class T>
int List<T>::size(){
    return this->amount;
}

template<class T>
T List<T>::pop()
{
    if (!(head)) return T();
    T data = head->data;
    Node<T>* node = head;
    if (head != tail)
    {
        head = head->next;
        head->previous = nullptr;
    }
    else
    {
        head = tail = nullptr;
    }
    delete node;
    amount--;
    return data;
}

template<class T>
T& List<T>::operator[](int num)
{
    Node<T> *curr = head;
    if (num < 0 || num >= amount) return curr->data;
    for (int i = 0; i < num; i++)
    {
        curr = curr->next;
    }
    return curr->data;
}

template<class T>
Node<T>* List<T>::begin()
{
    return head;
}

template<class T>
Node<T>* List<T>::end()
{
    return tail;
}

template<class T>
List<T>::~List()
{
    while (this->head)
    {
        this->pop();
    }
}



template <class T>
class Iterator // Шаблонный класс для итератора
{
    Node<T>* ptr; // Поле класса типа Node<T>* для указателя на элемент списка
    int index = 0; // Поле класса типа int для индекса
public:
    Iterator (Node<T>* ptr); // Конструктор класса
    Node<T>* getPtr(); // Метод класса для получения указателя на элемент списка
    void setPtr(Node<T>* newPtr); // Метод класса для установки указателя на элемент списка
    T& operator*() const; // Перегрузка оператора *
    Iterator& operator++(); // Перегрузка оператора ++
    Iterator& operator--(); // Перегрузка оператора --
    bool operator==(const Iterator& iter) const; // Перегрузка оператора ==
    bool operator!=(const Iterator& iter) const; // Перегрузка оператора !=
    friend Iterator<T> operator+(Iterator<T> iter, int shift) // Перегрузка оператора +
    {
        for (int i = 0; i < shift; i++)
            ++iter;
        return iter;
    }
    friend Iterator<T> operator-(Iterator<T> iter, int shift) // Перегрузка оператора -
    {
        for (int i = 0; i < shift; i++)
            --iter;
        return iter;
    }
};

template <class T>
Iterator<T>::Iterator(Node<T> *ptr): ptr(ptr){}

template<class T>
Node<T>* Iterator<T>::getPtr()
{
    return ptr;
}

template<class T>
void Iterator<T>::setPtr(Node<T> *newPtr)
{
    ptr = newPtr;
}

template <class T>
bool Iterator<T>::operator==(const Iterator& iter) const
{
    return ptr == iter.ptr;
}

template <class T>
bool Iterator<T>::operator!=(const Iterator& iter) const
{
    return ptr != iter.ptr;
}

template <class T>
T& Iterator<T>::operator*() const
{
    return ptr->data;
}

template <class T>
Iterator<T>& Iterator<T>::operator++()
{
    if (!ptr)
    {
        return *this;
    }
    ptr=ptr->next;
    return *this;
}

template <class T>
Iterator<T>& Iterator<T>::operator--()
{
    ptr= ptr->previous;
    return *this;
}

#endif
