/*  Create a class Fraction with numerator and denominator. Overload
constructors to:
• Initialize fraction as 0/1.
• Initialize with numerator only (denominator = 1).
• Initialize with numerator and denominator.
Also, add a member function to reduce the fraction to simplest form.*/

#include <iostream>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // 1. Default constructor: 0/1
    Fraction() {
        numerator = 0;
        denominator = 1;
    }

    // 2. Constructor with numerator only
    Fraction(int n) {
        numerator = n;
        denominator = 1;
    }

    // 3. Constructor with numerator and denominator
    Fraction(int n, int d) {
        numerator = n;
        denominator = d;
    }

    // Function to reduce fraction
    void reduce() {
        int g = gcd(numerator, denominator);
        numerator /= g;
        denominator /= g;
        // Handle negative denominator
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    // Function to display fraction
    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1;          // 0/1
    Fraction f2(5);       // 5/1
    Fraction f3(10, 20);  // 10/20

    cout << "Fraction f1: "; f1.display();
    cout << "Fraction f2: "; f2.display();

    cout << "Fraction f3 before reduction: "; f3.display();
    f3.reduce();
    cout << "Fraction f3 after reduction: "; f3.display();

    return 0;
}
