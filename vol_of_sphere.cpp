#include <iostream>
#include <cmath>
using namespace std;

// main function that computes the volume based on the raidus on the user
int main() {
    const double PI = 3.1416;
    double radius;

    cout << "Enter the radius of the sphere: ";
    cin>> radius;

    double volume = (4.0/3.0) * PI * pow(radius,3);
    cout << "Volume of sphere = " << volume  << endl;

    return 0;
}