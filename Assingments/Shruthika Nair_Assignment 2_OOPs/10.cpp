/*Design a simple example that demonstrates abstract classes and pure virtual
functions. Create a base class Shape with a pure virtual function area() and
derive Circle and Square classes. Explain why abstract classes are useful in
large-scale software design.*/

#include <iostream>
using namespace std;


class Shape {
public:
    virtual double area() = 0;  

    void display() {
        cout << "Area = " << area() << endl;
    }
};


class Circle : public Shape {
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14 * radius * radius;  
    }
};

class Square : public Shape {
    double side;

public:
    Square(double s) {
        side = s;
    }

    double area() override {
        return side * side;
    }
};

int main() {
    Circle c(5);
    Square s(4);

    c.display();   
    s.display();  

    return 0;
}
