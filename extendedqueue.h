#ifndef EXTENDEDQUEUE_H
#define EXTENDEDQUEUE_H
#include <QQueue>
#include <iostream>

class ExtendedQueue : public QQueue<double>
{
public:
    ExtendedQueue() : QQueue<double>(){}
    void bubbleSort();
    void shakerSort();
    void mergeSort();
    void mergeSort(int l, int r);
    void set();
    void print();
private:
    void swap(int i);
    void merge(int l, int m, int r);
    int min(int a, int b);
};

#endif // EXTENDEDQUEUE_H
