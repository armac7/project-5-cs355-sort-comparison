#include <iostream>
#include <random>
#include <ctime>

#ifndef SORTER_H
#define SORTER_H

template <class T>
class Sorter
{
    T *access;
    int size;
    int counter;

public:
    Sorter(T *p, int s);
    void Reset(T *p, int s);
    void Print() const;
    virtual void Sort() = 0;
    void FillRandom() const;
    void FillInOrder() const;
    void FillReverse() const;
    T *getAccess() const;
    void setAccess(T *p);
    int getSize() const;
    void incrementCounter();
    int getCounter();
};

template <class T>
Sorter<T>::Sorter(T *p, int s)
{
    if (p == nullptr)
        access = new T[s];
    else
        access = p;
    size = s;
    counter = 0;
};

template <class T>
void Sorter<T>::Reset(T *p, int s)
{
    delete access; // ! POTENTIAL MEMORY LEAK (only the first is a pointer, so not sure)
    if (p == nullptr)
        access = new T[s];
    else
        access = p;
    size = s;
    counter = 0;
};

template <class T>
void Sorter<T>::Print() const
{
    if (access == nullptr)
    {
        std::cout << "Array is empty" << std::endl;
        return;
    }
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            std::cout << access[i] << std::endl;
        else
            std::cout << access[i] << ", ";
    }
}

template <class T>
void Sorter<T>::FillRandom() const
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    // std::cout << "Inside the FillRandom() class" << std::endl; //! DEBUG PRINT
    for (int i = 0; i < size; i++)
    {
        int random = std::rand() % size + 1; // *biggest number it can be is 100;

        bool passed = true;
        for (int x = 0; x < i; x++) // *check if number is already in list.
        {
            if (access[x] == random) // *if x is found,
            {
                i--;            // *decrement i and continue
                passed = false; // * found a duplicate
                break;
            }
        }
        if (!passed) // *if duplicate found, try again.
            continue;

        access[i] = random;
    }

    // std::cout << "Done" << std::endl; //! DEBUG PRINT
};

template <class T>
void Sorter<T>::FillInOrder() const
{
    // std::cout << "Inside the FillInOrder() class" << std::endl; //! DEBUG PRINT
    for (int i = 0; i < size; i++)
        access[i] = i + 1;
    // std::cout << "Done" << std::endl; //! DEBUG PRINT
};

template <class T>
void Sorter<T>::FillReverse() const
{
    // std::cout << "Inside the FillReverse() class" << std::endl; //! DEBUG PRINT
    for (int i = size; i > 0; i--)
        access[size - i] = i;
    // std::cout << "Done" << std::endl; //! DEBUG PRINT
};

template <class T>
T *Sorter<T>::getAccess() const { return access; };

template <class T>
void Sorter<T>::setAccess(T *p) { access = p; }

template <class T>
int Sorter<T>::getSize() const { return size; };

template <class T>
void Sorter<T>::incrementCounter() { counter++; };

template <class T>
int Sorter<T>::getCounter() { return counter; }

#endif