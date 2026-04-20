#include <iostream>
using namespace std;

// function to compute the area
double computeArea(double side) {
    return side * side;
}

// function to compute the perimeter
double computePerimeter(double side) {
    return side *4;
}


int main() {
    double side;

    cout << "Enter the size length of the square: ";
    cin >> side;

    cout << "Area = " << computeArea(side) << endl;
    cout << "Perimeter = " << computePerimeter(side) << endl;

    return 0;
}