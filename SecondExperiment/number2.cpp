#include <iostream>
using namespace std;

int main() {
    
    //Declaration
    int numberPrevious = 2, numberCurrent = 3;
    int denominatorPrevious = 1, denominatorCurrent = 2;
    int i, userInput, nextNumber, nextDenominator;
    double sum = 0;  // Initialize sum to 0
    int sign = 1;
    
    //Input
    cout << "Input n term: ";
    cin >> userInput;
    
    //Process
    for (i = 1; i <= userInput; i++) {
        switch (i % 2) {
            case 1:
                sign = 1;
                break;
            case 0:
                sign = -1;
                break;
        }
        
        if (i == 1) {
            sum += sign * (double)numberPrevious / denominatorPrevious;
        } 
        else if (i == 2) {
            sum += sign * (double)numberCurrent / denominatorCurrent;
        }
        else {
            nextNumber = numberPrevious + numberCurrent;
            nextDenominator = denominatorPrevious + denominatorCurrent;
            
            sum += sign * (double)nextNumber / nextDenominator;
            
            numberPrevious = numberCurrent;
            numberCurrent = nextNumber;
            denominatorPrevious = denominatorCurrent;
            denominatorCurrent = nextDenominator;
        }
    }
    
    //Output
    cout << "Total sum: " << sum << endl;
    
    return 0;
}