#include <iostream>
#include "extendedlist.h"
#include "extendedqueue.h"
#include "extendedvector.h"

void ListTask()
{
    ExtendedList bubble;
    ExtendedList merge;
    ExtendedList shaker;

    bubble.set();
    std::cout << "Rare: ";
    for (double item : bubble)
    {
        std::cout << item << ' ';
    }
    std::cout << "\n";
    shaker = merge = bubble;
    shaker.shakerSort();
    bubble.bubbleSort();
    merge.mergeSort();
    std::cout << "Bubble sort: ";
    bubble.print();
    std::cout << "Shaker sort: ";
    shaker.print();
    std::cout << "Merge sort: ";
    merge.print();
}

void VectorTask()
{
    ExtendedVector bubble;
    ExtendedVector merge;
    ExtendedVector shaker;

    bubble.set();
    std::cout << "Rare: ";
    for (double item : bubble)
    {
        std::cout << item << ' ';
    }
    std::cout << "\n";
    shaker = merge = bubble;
    shaker.shakerSort();
    bubble.bubbleSort();
    merge.mergeSort();
    std::cout << "Bubble sort: ";
    bubble.print();
    std::cout << "Shaker sort: ";
    shaker.print();
    std::cout << "Merge sort: ";
    merge.print();
}

void QueueTask()
{
    ExtendedQueue bubble;
    ExtendedQueue merge;
    ExtendedQueue shaker;

    bubble.set();
    std::cout << "Rare: ";
    for (double item : bubble)
    {
        std::cout << item << ' ';
    }
    std::cout << "\n";
    shaker = merge = bubble;
    shaker.shakerSort();
    bubble.bubbleSort();
    merge.mergeSort();
    std::cout << "Bubble sort: ";
    bubble.print();
    std::cout << "Shaker sort: ";
    shaker.print();
    std::cout << "Merge sort: ";
    merge.print();
}

int main()
{
    int choice;
    std::cout << "1. List\n2. Vector\n3. Queue\nChoose container type: ";
    std::cin >> choice;
    switch (choice) {
    case 1:
        ListTask();
        break;
    case 2:
        VectorTask();
        break;
    case 3:
        QueueTask();
        break;
    default:
        std::cout << "Incorrect number\n";
    }
    return 0;
}
