#include <iostream>
using namespace std;

//function declaration
double getArea(double side);
double getArea(double wide, double length);
double getArea(float radius);
double getArea(float base, float height);

//main function
int main() {
    cout << "Area for square is " << getArea(10.0) << "\n";
    cout << "Area for rectangle is " << getArea(10.0, 7.0) << "\n";
    cout << "Area for circle is " << getArea(10.0f) << "\n"; //ngl, I confuse why we didn't use %f
    cout << "Area for triangle is " << getArea(10.0f, 7.0f) << "\n";
    return 0;
}

//function definitions
double getArea(double side) {  //square
    return side*side;
}

double getArea(double wide, double length) {  //rectangle
    return wide*length;
}

double getArea(float radius) {  //circle
    return 3.14*radius*radius;
}

double getArea(float base, float height) {  //triangle
    return 0.5*base*height;
}