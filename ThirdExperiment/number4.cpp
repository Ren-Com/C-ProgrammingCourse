#include <iostream>
using namespace std;

int getRand(int m, int n) {
    return rand() % (n - m + 1) + m;
}

int main() {
    srand(time(0));
    
    int sum = 0;
    
    cout << "Random numbers: ";
    
    for (int i = 0; i < 10; i++) {
        int num = getRand(1, 100);
        cout << num << " ";
        sum += num;
    }
    
    cout << "\nAverage: " << sum / 10.0 << endl;
    
    return 0;
}
//watch  this to understand how to generate random numbers in C++ :D
//https://youtu.be/bYEdLCWJeHA?si=VpneohiKZkFiUifz