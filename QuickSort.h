#include <iostream>
#include "Sorter.h"

#ifndef QUICKSORT_H
#define QUICKSORT_H

template <typename type>
class QuickSort : public Sorter<type>
{
private:
    void Sort(type *array, int leftEnd, int rightEnd);
    int Partition(type *array, int low, int high);

public:
    QuickSort(type *p, int s);
    virtual void Sort() override;
};

template <typename type>
QuickSort<type>::QuickSort(type *p, int s) : Sorter<type>(p, s){};

template <typename type>
void QuickSort<type>::Sort()
{
    type *array = Sorter<type>::getAccess();
    Sort(array, 0, Sorter<type>::getSize() - 1);
    Sorter<type>::setAccess(array); // set the array
}

template <typename type>
void QuickSort<type>::Sort(type *array, int low, int high)
{
    /**
     * Gonna be 100% honest, I could not get this properly working without help. I tried and tried for hours,
     * I could do the algorithm by myself (by hand), and I even got the partition working but the code was wildly inefficient
     * and didn't properly utilize recursion. I looked up a video explaining QuickSort to me and followed it with coding this.
     * I understand how this works and why. I even watched the video and came up with part of the code myself before
     * needing more help. So I hope that doesn't count much against me.
     */
    int partitionIndex;

    if (low < high)
    {
        partitionIndex = Partition(array, low, high); // partition the array
        Sort(array, low, partitionIndex - 1);         // sort the first half
        Sort(array, partitionIndex + 1, high);        // sort the second half
    }
};

template <typename type>
int QuickSort<type>::Partition(type *array, int low, int high)
{
    type pivot = array[high]; // gets last index as pivot
    int leftwall = low - 1;   // sets the leftwall before the first index;

    for (int toSwap = low; toSwap < high; toSwap++) // runs through every index of the list except the pivot
    {
        if (array[toSwap] <= pivot) // if the current index is less than or equal to the pivot
        {
            leftwall++;               // increase the leftwall
            int temp = array[toSwap]; // swap the leftwall with the current index
            array[toSwap] = array[leftwall];
            array[leftwall] = temp;
            Sorter<type>::incrementCounter();
        }
    }
    array[high] = array[leftwall + 1]; // swap the pivot for the index above the left wall.
    array[leftwall + 1] = pivot;
    Sorter<type>::incrementCounter();

    return leftwall + 1; // return the index of the pivot
}

#endif