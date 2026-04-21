#include <iostream>
using namespace std;

struct date
{
    int day;
    string month;
    int year;
};
typedef struct date Date;

int main() {
    Date today,tomorrow;

    today.day = 14;
    today.month = "April";
    today.year = 2024;

    cout << "Today's date is: " << today.day << " " << today.month << " " << today.year << endl;

    tomorrow=today;
    tomorrow.day++;

    cout << "Tomorrow's date is: " << tomorrow.day << " " << tomorrow.month << " " << tomorrow.year << endl;
    
    return 0;
}