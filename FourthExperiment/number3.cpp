#include <iostream>
using namespace std;
// Part for check isPrime==true
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
// MAX prime in my array
int getMaxPrime(int a[], int n)
{
    int maxPrime = -1;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            if (a[i] > maxPrime)
            {
                maxPrime = a[i];
            }
        }
    }

    return maxPrime;
}
int main()
{
    int numbers[] = {5, 28, 17, 105, 893, 3, 45, 1};
    int n = 8;

    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int result = getMaxPrime(numbers, n);

    if (result != -1)
    {
        cout << "The largest prime number: " << result << endl;
    }
    else
    {
        cout << "There are no prime numbers in the array" << endl;
    }
}