#include "extendedlist.h"

void ExtendedList::bubbleSort()
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

void ExtendedList::swap(int i)
{
    double temp;
    temp = this->at(i);
    this->replace(i, this->at(i - 1));
    this->replace(i-1, temp);
}

void ExtendedList::shakerSort()
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

void ExtendedList::merge(int l, int m, int r)
{
  int i = l;
  int j = m + 1;
  int k = l;

  double temp[5];

  while (i <= m && j <= r)
  {
    if (this->at(i) <= this->at(j))
    {
      temp[k] = this->at(i);
      i++;
      k++;
    }

    else
    {
      temp[k] = this->at(j);
      j++;
      k++;
    }

  }

  while (i <= m)
  {
    temp[k] = this->at(i);
    i++;
    k++;

  }

  while (j <= r)
  {
    temp[k] = this->at(j);
    j++;
    k++;
  }

  for (int p = l; p <= r; p++)
    this->replace(p, temp[p]);
}

void ExtendedList::mergeSort()
{
    mergeSort(0, this->size() - 1);
}

void ExtendedList::mergeSort(int l, int r)
{
  if (l < r)
  {
    int m = (l + r) / 2;

    mergeSort(l, m);
    mergeSort(m + 1, r);

    merge(l, m, r);
  }
}

void ExtendedList::set()
{
    int size = 0;
    std::cout << "Enter size of list: ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        double num;
        std::cout << "Enter " << i + 1 << " element: ";
        std::cin >> num;
        this->append(num);
    }
}

void ExtendedList::print()
{
    for (int i = 0; i < this->size(); i++)
    {
        std::cout << this->at(i) << ' ';
    }
    std::cout << '\n';
}
