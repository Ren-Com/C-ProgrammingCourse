#include <iostream>
using namespace std;

int main() {
    
    int rows = 5, i, j;
    
    //Loop for each row
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
    
    return 0;
}