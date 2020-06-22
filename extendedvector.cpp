#include "extendedvector.h"

void ExtendedVector::bubbleSort()
{
    double temp;
    for (int i = 0; i < this->size() - 1; i++)
    {
        for (int j = 0; j < this->size() - i - 1; j++)
        {
            if (this->at(j) > this->at(j + 1))
            {
                temp = this->at(j);
                this->replace(j, this->at(j + 1));
                this->replace(j + 1, temp);
            }
        }
    }
}

void ExtendedVector::swap(int i)
{
    double temp;
    temp = this->at(i);
    this->replace(i, this->at(i - 1));
    this->replace(i-1, temp);
}

void ExtendedVector::shakerSort()
{
    double Left, Right, i;
    Left = 0;
    Right = this->size() - 1;

    while (Left<=Right)
    {
        for (i = Right; i >= Left; i--)
            if (this->at(i-1) > this->at(i)) swap(i);

        Left++;
        for (i = Left; i <= Right; i++)
            if (this->at(i-1) > this->at(i)) swap(i);

        Right--;
    }
}

void ExtendedVector::merge(int low, int high, int mid)
{
    int i, j, k;
    double c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (this->at(i) < this->at(j)) {
            c[k] = this->at(i);
            k++;
            i++;
        }
        else  {
            c[k] = this->at(j);
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = this->at(i);
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = this->at(j);
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        this->replace(i, c[i]);
    }
}

void ExtendedVector::mergeSort()
{
    mergeSort(0, this->size() - 1);
}

void ExtendedVector::mergeSort(int low, int high)
{
    int mid;
    if (low < high){
        mid=(low + high) / 2;
        mergeSort(low, mid);
        mergeSort(mid+1, high);
        merge(low, high, mid);
    }
}

void ExtendedVector::set()
{
    int size = 0;
    std::cout << "Enter size of queue: ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        double num;
        std::cout << "Enter " << i + 1 << " element: ";
        std::cin >> num;
        this->append(num);
    }
}

void ExtendedVector::print()
{
    for (int i = 0; i < this->size(); i++)
    {
        std::cout << this->at(i) << ' ';
    }
    std::cout << '\n';
}
