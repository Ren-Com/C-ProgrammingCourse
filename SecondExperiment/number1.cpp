#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declaration
    int prime, i;

    cout << "Welcome to program!!" << endl;
    cout << "Input your prime number: ";
    cin >> prime;

    // process
    if (prime <= 1)
    {
        cout << prime << " is not a prime number";
    }

    else
    {
        for (i = 2; i <= sqrt(prime); i++)
        {
            if (prime % i == 0)
            {
                cout << prime << " is not a prime number";
            }
            else
            {
                cout << prime << " is a prime number";
            }
        }
    }
    return 0;
}