#include <iostream>
using namespace std;

int main() {
    // Variable to store the number of days entered by the user
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    // Convert days to seconds
    long long seconds = days * 24LL * 60 * 60;
    cout << days << " day(s) = " << seconds << " seconds" << endl;

    return 0;
}
