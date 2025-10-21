/* Define a class Car with members brand, model, and price. Overload
constructors to:
• Initialize brand only.
• Initialize brand and model.
• Initialize brand, model, and price.*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int price;

public:
    // 1. Constructor with brand only
    Car(string b) {
        brand = b;
        model = "Unknown";
        price = 0;
    }

    // 2. Constructor with brand and model
    Car(string b, string m) {
        brand = b;
        model = m;
        price = 0;
    }

    // 3. Constructor with brand, model, and price
    Car(string b, string m, int p) {
        brand = b;
        model = m;
        price = p;
    }

    // Function to display car details
    void display() {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Price : " << price << endl << endl;
    }
};

int main() {
    Car c1("Toyota");                // Brand only
    Car c2("Honda", "Civic");        // Brand and model
    Car c3("Ford", "Mustang", 50000); // Brand, model, price

    cout << "Car 1 details:" << endl;
    c1.display();

    cout << "Car 2 details:" << endl;
    c2.display();

    cout << "Car 3 details:" << endl;
    c3.display();

    return 0;
}
