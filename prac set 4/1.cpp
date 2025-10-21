/*Define a class Rectangle with data members length and breadth.
Write a constructor to initialize both and a member function to calcu-
late the area.*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor to initialize length and breadth
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Member function to calculate area
    int getArea() {
        return length * breadth;
    }
};

int main() {
    // Create a Rectangle object and initialize via constructor
    Rectangle rect(10, 5);

    // Print area
    cout << "Area of Rectangle: " << rect.getArea() << endl;

    return 0;
}
