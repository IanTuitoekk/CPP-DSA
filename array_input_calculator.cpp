#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    double values[SIZE];
    double sum = 0.0;

    //Loop to populate the array
    cout << "Enter 5 values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value [" << i + 1 << "]: ";
        cin >> values[i];
        sum += values[i];
    }

    // Calculate the average
    double average = sum / SIZE;

    // Display the array elements

    cout << "Values entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << values[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}