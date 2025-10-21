/* Write a class Temperature with a private member celsius. Provide
setCelsius() and getFahrenheit() methods to convert the stored
temperature to Fahrenheit.*/


#include <iostream>
using namespace std;

class Temperature {
private:
    int celsius;   // store temperature in Celsius

public:
    // Setter
    void setCelsius(int c) {
        celsius = c;
    }

    // Method to get Fahrenheit
    int getFahrenheit() {
        return (celsius * 9 / 5) + 32;
    }
};

int main() {
    Temperature t;

    // Set Celsius value
    t.setCelsius(25);

    // Print converted value
    cout << "Celsius    : 25" << endl;
    cout << "Fahrenheit : " << t.getFahrenheit() << endl;

    return 0;
}
