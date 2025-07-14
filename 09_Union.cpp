#include <iostream>
using namespace std;

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    Data d;

    d.intValue = 10;
    cout << "Int Value: " << d.intValue << endl;

    d.floatValue = 5.5;
    cout << "Float Value: " << d.floatValue << endl;

    d.charValue = 'A';
    cout << "Char Value: " << d.charValue << endl;

    cout << "Accessing intValue again: " << d.intValue << endl; // Value may be garbage

    return 0;
}
