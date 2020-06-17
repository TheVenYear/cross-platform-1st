#ifndef EXTENDEDVECTOR_H
#define EXTENDEDVECTOR_H
#include <QVector>
#include <iostream>

class ExtendedVector : public QVector<double>
{
public:
    ExtendedVector() : QVector(){}
    ExtendedVector(std::initializer_list<double> params) : QVector<double>(params){}
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

#endif // EXTENDEDVECTOR_H
