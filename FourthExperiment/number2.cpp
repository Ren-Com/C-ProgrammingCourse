#include <iostream>
using namespace std;

int main()
{
    int pascal[10][10] = {0};
    for (int i = 0; i < 10; i++)
    {
        pascal[i][0] = 1;
        pascal[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    // Print Pascal
    for (int i = 0; i < 10; i++)
    {
        // Space, IDK maybe jarak hahaha
        for (int space = 0; space < 10 - i - 1; space++)
        {
            cout << " ";
        }

        // The number
        for (int j = 0; j <= i; j++)
        {
            cout << pascal[i][j];
            if (j < i)
                cout << " ";
        }
        cout << endl;
    }
    // The output not good enough though, how to center it????
    return 0;
}