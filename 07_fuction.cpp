#include <iostream>
using namespace std;

void greet() {
    cout << "Hello! This is a function." << endl;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    greet();

    int sum = add(5, 7);
    cout << "Sum is: " << sum << endl;

    return 0;
}
