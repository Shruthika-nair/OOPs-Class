/* Create a class Distance with data members feet and inches. Imple-
ment constructors for:

• Default initialization.
• Initialization using feet only.
• Initialization using feet and inches.
Also, write a function to display the distance.*/

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // 1. Default constructor: both zero
    Distance() {
        feet = 0;
        inches = 0;
    }

    // 2. Constructor with feet only
    Distance(int f) {
        feet = f;
        inches = 0;
    }

    // 3. Constructor with feet and inches
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    // Function to display distance
    void display() {
        cout << feet << " feet, " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1;         // Default constructor
    Distance d2(5);      // Feet only
    Distance d3(6, 8);   // Feet and inches

    cout << "Distance d1: "; d1.display();
    cout << "Distance d2: "; d2.display();
    cout << "Distance d3: "; d3.display();

    return 0;
}
