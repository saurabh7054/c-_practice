#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // 1. if-else
    if (number % 2 == 0) {
        cout << "Even Number" << endl;
    }
    else {
        cout << "Odd Number" << endl;
    }

    // 2. if-else-if ladder
    if (number > 0) {
        cout << "Positive" << endl;
    }
    else if (number < 0) {
        cout << "Negative" << endl;
    }
    else {
        cout << "Zero" << endl;
    }

    // 3. switch case
    int day;
    cout << "Enter day number (1-3): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Invalid Day" << endl;
    }
    return 0;
}
