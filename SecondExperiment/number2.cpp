#include <iostream>
using namespace std;

int main() {
    
    //Declaration
    int numPrev = 2, numCurr = 3;
    int denPrev = 1, denCurr = 2;
    int i, userInput, nextNum, nextDen;
    double sum;
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
            sum += sign * (double)numPrev / denPrev;
            cout << "Term " << i << ": " << (sign == 1 ? "+" : "") 
                 << numPrev << "/" << denPrev << endl;
        } 
        else if (i == 2) {
            sum += sign * (double)numCurr / denCurr;
            cout << "Term " << i << ": " << (sign == 1 ? "+" : "") 
                 << numCurr << "/" << denCurr << endl;
        }
        else {
            nextNum = numPrev + numCurr;
            nextDen = denPrev + denCurr;
            
            sum += sign * (double)nextNum / nextDen;
            cout << "Term " << i << ": " << (sign == 1 ? "+" : "") 
                 << nextNum << "/" << nextDen << endl;
            
            numPrev = numCurr;
            numCurr = nextNum;
            denPrev = denCurr;
            denCurr = nextDen;
        }
    }
    
    //Output
    cout << "\nTotal sum: " << sum << endl;
    
    return 0;
}