#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main() {
    Person p1;
    p1.name = "Rahul";
    p1.age = 21;
    p1.height = 5.9;

    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << endl;

    return 0;
}
