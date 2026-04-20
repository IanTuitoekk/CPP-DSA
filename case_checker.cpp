#include <iostream>
#include <cctype>
using namespace std;

// functions that checks the case of letters
void checkCase(char ch) {
    if (isupper(ch)) {
        cout << "'" << ch << "' is an UPPERCASE letter." << endl;
    } else if (islower(ch)) {
        cout << "'" << ch << "' is a lowercase letter." << endl;
    } else {
        cout << "'" << ch << "' is not an alphabetic character." << endl;
    }
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    checkCase(ch);

    return 0;
}