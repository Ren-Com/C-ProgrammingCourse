#include <cmath>
#include <iostream>
using namespace std;

bool judgePrime(int x);

int main() {
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (judgePrime(num)==true) {
        cout << num << " is a prime number" << endl;
    } else {
        cout << num << " is not a prime number" << endl;
    }
    
    return 0;
}

bool judgePrime(int x) {
    if (x <= 1) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    
    return true;
}