#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a == b: " << (a == b) << endl;

    cout << "a && b: " << (a && b) << endl;
    cout << "a || b: " << (a || b) << endl;
    cout << "!a: " << (!a) << endl;

    a += 5;
    cout << "a after += 5: " << a << endl;

    a++;
    cout << "a after increment: " << a << endl;
    return 0;
}
