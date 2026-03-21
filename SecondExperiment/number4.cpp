#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Prime numbers between 2 and 1000:" << endl;
    cout << "--------------------------------" << endl;
    
    int count = 0;

    for (int number = 2; number <= 1000; number++) {
        bool prime = true;
        
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                prime = false;
            }
        }
        
        if (prime) {
            cout << number << "\t";
            count++;
            
            if (count % 10 == 0) {
                cout << endl;
            }
        }
    }
    
    cout << "\n\nTotal prime numbers found: " << count << endl;
    
    return 0;
}