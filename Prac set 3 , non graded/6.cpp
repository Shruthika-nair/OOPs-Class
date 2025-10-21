/* Write a class Car with private members brand and model. Provide
setter and getter methods. In main(), create an array of cars and use
the methods to assign and print their values.*/

#include <iostream>
#include <string>
using namespace std;

// Define Car class
class Car {
private:
    string brand;
    string model;

public:
    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }
    string getBrand() { return brand; }
    string getModel() { return model; }
};

int main() {
    Car cars[3];  // array of 3 cars

    // Directly set values
    cars[0].setBrand("Toyota"); cars[0].setModel("Corolla");
    cars[1].setBrand("Honda");  cars[1].setModel("Civic");
    cars[2].setBrand("Ford");   cars[2].setModel("Mustang");

    // Print values
    for (int i = 0; i < 3; i++)
        cout << cars[i].getBrand() << " " << cars[i].getModel() << endl;

    return 0;
}
