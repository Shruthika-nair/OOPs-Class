/* Write a program to demonstrate single inheritance. Create a base class Shape
and a derived class Rectangle. Include methods to calculate area and perimeter.
Explain why inheritance is preferred over writing separate classes for each shape.*/

#include <iostream>
using namespace std;


class Shape {
protected:
    float length, width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }
};


class Rectangle : public Shape {
public:
    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    void display() {
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 3);
    rect.display();
    return 0;
}
