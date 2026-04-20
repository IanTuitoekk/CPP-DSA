#include <iostream>
using namespace std;


int main () {
    double x = 0;
    double y = 20;

    // Loop runs at least once 
    do {
        y = y- 4;
        x = x + (2.0/y);
    }
    // Continue looping as long as y is 6 or greater
    while (y >=6);

    cout << "X = " << x << endl;

    return 0;
}