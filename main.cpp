#include <iostream>
#include "Sorter.h"
#include "QuickSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"

int main()
{
    int *arr;
    int size = 15;
    QuickSort<int> quickSort(arr, size);
    SelectionSort<int> selectionSort(arr, size);
    MergeSort<int> mergeSort(arr, size);

    std::cout << "Quick Sort Table" << std::endl;
    std::cout << "| Fill Type - # of Items - # of Comparisons |" << std::endl;

    // Quick Sort
    quickSort.Reset(arr, 10);
    quickSort.FillRandom();
    quickSort.Sort();
    std::cout << "| Random - 10 - " << quickSort.getCounter() << " |" << std::endl;
    quickSort.Reset(arr, 100);
    quickSort.FillRandom();
    quickSort.Sort();
    std::cout << "| Random - 100 - " << quickSort.getCounter() << " |" << std::endl;
    quickSort.Reset(arr, 1000);
    quickSort.FillRandom();
    quickSort.Sort();
    std::cout << "| Random - 1000 - " << quickSort.getCounter() << " |" << std::endl;
    quickSort.Reset(arr, 10000);
    quickSort.FillRandom();
    quickSort.Sort();
    std::cout << "| Random - 10000 - " << quickSort.getCounter() << " |" << std::endl;

    quickSort.Reset(arr, 10);
    quickSort.FillInOrder();
    quickSort.Sort();
    std::cout << "| In Order - 10 - " << quickSort.getCounter() << " |" << std::endl;
    quickSort.Reset(arr, 100);
    quickSort.FillInOrder();
    quickSort.Sort();
    std::cout << "| In Order - 100 - " << quickSort.getCounter() << " |" << std::endl;
    quickSort.Reset(arr, 1000);
    quickSort.FillInOrder();
    quickSort.Sort();
    std::cout << "| In Order - 1000 - " << quickSort.getCounter() << " |" << std::endl;
    quickSort.Reset(arr, 10000);
    quickSort.FillInOrder();
    quickSort.Sort();
    std::cout << "| In Order - 10000 - " << quickSort.getCounter() << " |" << std::endl;

    quickSort.Reset(arr, 10);
    quickSort.FillReverse();
    quickSort.Sort();
    std::cout << "| Reverse - 10 - " << quickSort.getCounter() << " |" << std::endl;
    quickSort.Reset(arr, 100);
    quickSort.FillReverse();
    quickSort.Sort();
    std::cout << "| Reverse - 100 - " << quickSort.getCounter() << " |" << std::endl;
    quickSort.Reset(arr, 1000);
    quickSort.FillReverse();
    quickSort.Sort();
    std::cout << "| Reverse - 1000 - " << quickSort.getCounter() << " |" << std::endl;
    quickSort.Reset(arr, 10000);
    quickSort.FillReverse();
    quickSort.Sort();
    std::cout << "| Reverse - 10000 - " << quickSort.getCounter() << " |" << std::endl;

    std::cout << std::endl;

    std::cout << "Selection Sort Table" << std::endl;
    std::cout << "| Fill Type - # of Items - # of Comparisons |" << std::endl;
    selectionSort.Reset(arr, 10);
    selectionSort.FillRandom();
    selectionSort.Sort();
    std::cout << "| Random - 10 - " << selectionSort.getCounter() << " |" << std::endl;
    selectionSort.Reset(arr, 100);
    selectionSort.FillRandom();
    selectionSort.Sort();
    std::cout << "| Random - 100 - " << selectionSort.getCounter() << " |" << std::endl;
    selectionSort.Reset(arr, 1000);
    selectionSort.FillRandom();
    selectionSort.Sort();
    std::cout << "| Random - 1000 - " << selectionSort.getCounter() << " |" << std::endl;
    selectionSort.Reset(arr, 10000);
    selectionSort.FillRandom();
    selectionSort.Sort();
    std::cout << "| Random - 10000 - " << selectionSort.getCounter() << " |" << std::endl;

    selectionSort.Reset(arr, 10);
    selectionSort.FillInOrder();
    selectionSort.Sort();
    std::cout << "| In Order - 10 - " << selectionSort.getCounter() << " |" << std::endl;
    selectionSort.Reset(arr, 100);
    selectionSort.FillInOrder();
    selectionSort.Sort();
    std::cout << "| In Order - 100 - " << selectionSort.getCounter() << " |" << std::endl;
    selectionSort.Reset(arr, 1000);
    selectionSort.FillInOrder();
    selectionSort.Sort();
    std::cout << "| In Order - 1000 - " << selectionSort.getCounter() << " |" << std::endl;
    selectionSort.Reset(arr, 10000);
    selectionSort.FillInOrder();
    selectionSort.Sort();
    std::cout << "| In Order - 10000 - " << selectionSort.getCounter() << " |" << std::endl;

    selectionSort.Reset(arr, 10);
    selectionSort.FillReverse();
    selectionSort.Sort();
    std::cout << "| Reverse - 10 - " << selectionSort.getCounter() << " |" << std::endl;
    selectionSort.Reset(arr, 100);
    selectionSort.FillReverse();
    selectionSort.Sort();
    std::cout << "| Reverse - 100 - " << selectionSort.getCounter() << " |" << std::endl;
    selectionSort.Reset(arr, 1000);
    selectionSort.FillReverse();
    selectionSort.Sort();
    std::cout << "| Reverse - 1000 - " << selectionSort.getCounter() << " |" << std::endl;
    selectionSort.Reset(arr, 10000);
    selectionSort.FillReverse();
    selectionSort.Sort();
    std::cout << "| Reverse - 10000 - " << selectionSort.getCounter() << " |" << std::endl;

    std::cout << std::endl;

    std::cout << "Merge Sort Table" << std::endl;
    std::cout << "| Fill Type - # of Items - # of Comparisons |" << std::endl;
    mergeSort.Reset(arr, 10);
    mergeSort.FillRandom();
    mergeSort.Sort();
    std::cout << "| Random - 10 - " << mergeSort.getCounter() << " |" << std::endl;
    mergeSort.Reset(arr, 100);
    mergeSort.FillRandom();
    mergeSort.Sort();
    std::cout << "| Random - 100 - " << mergeSort.getCounter() << " |" << std::endl;
    mergeSort.Reset(arr, 1000);
    mergeSort.FillRandom();
    mergeSort.Sort();
    std::cout << "| Random - 1000 - " << mergeSort.getCounter() << " |" << std::endl;
    mergeSort.Reset(arr, 10000);
    mergeSort.FillRandom();
    mergeSort.Sort();
    std::cout << "| Random - 10000 - " << mergeSort.getCounter() << " |" << std::endl;

    mergeSort.Reset(arr, 10);
    mergeSort.FillInOrder();
    mergeSort.Sort();
    std::cout << "| In Order - 10 - " << mergeSort.getCounter() << " |" << std::endl;
    mergeSort.Reset(arr, 100);
    mergeSort.FillInOrder();
    mergeSort.Sort();
    std::cout << "| In Order - 100 - " << mergeSort.getCounter() << " |" << std::endl;
    mergeSort.Reset(arr, 1000);
    mergeSort.FillInOrder();
    mergeSort.Sort();
    std::cout << "| In Order - 1000 - " << mergeSort.getCounter() << " |" << std::endl;
    mergeSort.Reset(arr, 10000);
    mergeSort.FillInOrder();
    mergeSort.Sort();
    std::cout << "| In Order - 10000 - " << mergeSort.getCounter() << " |" << std::endl;

    mergeSort.Reset(arr, 10);
    mergeSort.FillReverse();
    mergeSort.Sort();
    std::cout << "| Reverse - 10 - " << mergeSort.getCounter() << " |" << std::endl;
    mergeSort.Reset(arr, 100);
    mergeSort.FillReverse();
    mergeSort.Sort();
    std::cout << "| Reverse - 100 - " << mergeSort.getCounter() << " |" << std::endl;
    mergeSort.Reset(arr, 1000);
    mergeSort.FillReverse();
    mergeSort.Sort();
    std::cout << "| Reverse - 1000 - " << mergeSort.getCounter() << " |" << std::endl;
    mergeSort.Reset(arr, 10000);
    mergeSort.FillReverse();
    mergeSort.Sort();
    std::cout << "| Reverse - 10000 - " << mergeSort.getCounter() << " |" << std::endl;

    mergeSort.FillRandom();
    mergeSort.Sort();
    mergeSort.Print();
    int test;
    std::cin >> test;
    return 0;
}