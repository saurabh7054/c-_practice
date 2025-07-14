#include <iostream>
using namespace std;

class Car {
    private:
    string engineNumber;  // Encapsulated data

    public:
    string model;

    Car(string m, string e) {
        model = m;
        engineNumber = e;
    }

    void showDetails() {
        cout << "Model: " << model << endl;
        cout << "Engine No: " << engineNumber << endl;
    }
};

int main() {
    Car c1("BMW X5", "ENG1234");
    c1.showDetails();
    return 0;
}
