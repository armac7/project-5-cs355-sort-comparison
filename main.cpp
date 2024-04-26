#include <iostream>
#include "Sorter.h"
#include "QuickSort.h"
#include "SelectionSort.h"

int main()
{
    int *arr;
    int size = 15;
    QuickSort<int> quickSort(arr, size);
    SelectionSort<int> selectionSort(arr, size);

    // ! SORTER.H TESTS !
    // quickSort.FillInOrder();
    // quickSort.Print();
    // quickSort.Reset(arr, size);
    quickSort.FillRandom();
    quickSort.Print();

    // quickSort.Reset(arr, size);
    // quickSort.FillReverse();
    // quickSort.Print();

    quickSort.Sort();
    quickSort.Print();

    std::cout << std::endl
              << std::endl;

    selectionSort.FillRandom();
    selectionSort.Print();
    selectionSort.Sort();
    selectionSort.Print();
    int test;
    std::cin >> test;
    return 0;
}