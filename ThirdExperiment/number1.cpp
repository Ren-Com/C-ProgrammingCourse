#include <cmath>
#include <iostream>
using namespace std;

bool judgePrime(int x);

int main() {
    int num[] = {-5,1,2,4,5,7,20,100,125};
    
    for (int i = 0; i < 9; i++) {
        if (judgePrime(num[i])) {
            cout << num[i] << " is a prime number" << endl;
        } else {
            cout << num[i] << " is not a prime number" << endl;
        }
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