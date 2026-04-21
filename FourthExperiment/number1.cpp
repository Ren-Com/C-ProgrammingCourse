#include <iostream>
using namespace std;

int main()
{
    char first[] = {'a', 'b', 'c', 'd', 'e'};
    char second[] = {'f', 'g', 'h', 'i', 'j'};

    int size1 = sizeof(first) / sizeof(first[0]);
    int size2 = sizeof(second) / sizeof(second[0]);
    int totalSize = size1 + size2;

    char temp[totalSize];

    for (int i = 0; i < size1; i++)
    {
        temp[i] = first[i];
    }

    for (int i = 0; i < size2; i++)
    {
        temp[size1 + i] = second[i];
    }

    for (int i = 0; i < totalSize; i++) // putting back temporary to first mweheeheh
    {
        first[i] = temp[i];
    }

    cout << "First Array now is: ";
    for (int i = 0; i < totalSize; i++)
    {
        cout << first[i];
    }

    return 0;
}
// https://youtu.be/6Hk2aE_SRzY?si=bhuhMGYREphfwQ9t use this as reference