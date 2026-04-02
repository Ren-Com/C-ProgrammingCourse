#include <iostream>
using namespace std;

bool isLeapYear(int year);
int getDaysInMonth(int month, int year);
int daySum(int year, int month = 1, int day = 1);

int main() {
    cout << "=== Testing daySum Function ===\n\n"; //Salah tought me this :D
    
    cout << "Test 1: daySum(2026, 5, 15)" << endl;
    daySum(2026, 5, 15);
    
    cout << "\nTest 2: daySum(2012, 5)" << endl;
    daySum(2012, 5);
    
    cout << "\nTest 3: daySum(2022)" << endl;
    daySum(2022);
    
    cout << "\nTest 4: daySum(2028, 12, 31)" << endl;
    daySum(2028, 12, 31);
    
    cout << "\nTest 5: daySum(1997, 1, 1)" << endl;
    daySum(1997, 1, 1);
    
    return 0;
}

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        if (isLeapYear(year)) {
            return 29; //leap year
        } else {
            return 28; //idk what is this called hehehehe
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int daySum(int year, int month, int day) {
    int maxDay = getDaysInMonth(month, year);
    int totalDays = 0;
    
    if (month < 1 || month > 12) {
        cout << "Invalid input: Month must be between 1 and 12 sir!!!" << endl;
    }
    
    if (day < 1 || day > maxDay) {
        cout << "Error: Day does not match month " << month << "!" << endl;
    }

    if (month > 1) totalDays += 31;
    if (month > 2) {
        if (isLeapYear(year)) {
            totalDays += 29; 
        } else {
            totalDays += 28;
        }
    }
    if (month > 3) totalDays += 31;
    if (month > 4) totalDays += 30;
    if (month > 5) totalDays += 31;
    if (month > 6) totalDays += 30;
    if (month > 7) totalDays += 31;
    if (month > 8) totalDays += 31;
    if (month > 9) totalDays += 30;
    if (month > 10) totalDays += 31;
    if (month > 11) totalDays += 30;

    totalDays += day;
    cout << "Date " << day << "/" << month << "/" << year << " is day number " << totalDays << " of year " << year << endl;

    return totalDays;
}