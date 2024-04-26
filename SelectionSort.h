#include <iostream>
#include "Sorter.h"

#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

template <typename type>
class SelectionSort : public Sorter<type>
{
private:
    void Sort(type *array, int unsortedSize, int sortedSize);

public:
    SelectionSort(type *p, int s);
    virtual void Sort() override;
};

template <typename type>
SelectionSort<type>::SelectionSort(type *p, int s) : Sorter<type>(p, s){};

template <typename type>
void SelectionSort<type>::Sort()
{
    type *array = Sorter<type>::getAccess();
    Sort(array, Sorter<type>::getSize(), 0);
    Sorter<type>::setAccess(array);
}

template <typename type>
void SelectionSort<type>::Sort(type *array, int unsortedSize, int sortedSize)
{
    // ? I'm pretty sure this only needs to be less than not equal to
    if (sortedSize <= unsortedSize) // *as long as the sorted portion of the array is smaller than or equal to the unsorted portion
    {
        int minIndex = sortedSize;                      // * index of minimum value is the item after the sorted portion.
        for (int i = sortedSize; i < unsortedSize; i++) // *check all non-sorted values for new minimum
            if (array[i] < array[minIndex])             // *If new minimum is found
                minIndex = i;

        // * add next value to sorted portion
        int temp = array[sortedSize];
        array[sortedSize] = array[minIndex];
        array[minIndex] = temp;

        // *increment sorted size
        sortedSize++;

        // *finish recursively
        Sort(array, unsortedSize, sortedSize);
    }
}

#endif