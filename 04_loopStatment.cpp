#include <iostream>
using namespace std;

int main() {
    // 1. for loop
    cout << "For Loop: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. while loop
    cout << "While Loop: ";
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // 3. do-while loop
    cout << "Do-While Loop: ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;
    return 0;
}
