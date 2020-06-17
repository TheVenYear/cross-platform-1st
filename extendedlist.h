#ifndef EXTENDEDLIST_H
#define EXTENDEDLIST_H
#include <QList>
#include <iostream>

class ExtendedList : public QList<double>
{
public:
    ExtendedList() : QList<double>(){}
    ExtendedList(std::initializer_list<double> params) : QList<double>(params){}
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

#endif // EXTENDEDLIST_H
