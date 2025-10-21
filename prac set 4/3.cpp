/* Create a class Complex with two data members real and imag. Over-
load constructors to:

• Initialize both to zero (default constructor).
• Initialize with one value (real part only).
• Initialize with two values (real and imaginary parts).*/

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Default constructor (both zero)
    Complex() {
        real = 0;
        imag = 0;
    }

    // Constructor with one value (real part only)
    Complex(int r) {
        real = r;
        imag = 0;
    }

    // Constructor with two values (real and imaginary)
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Function to display the complex number
    void display() {
        cout << real;
        if (imag >= 0) cout << " + " << imag << "i" << endl;
        else cout << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1;          // Default constructor
    Complex c2(5);       // Real part only
    Complex c3(3, 4);    // Real and imaginary

    cout << "Complex number c1: "; c1.display();
    cout << "Complex number c2: "; c2.display();
    cout << "Complex number c3: "; c3.display();

    return 0;
}
