/* Create a program to demonstrate function overloading and overriding. Show
how compile-time and run-time polymorphism differ. Explain when each is useful
in real-world applications.*/

#include <iostream>
using namespace std;


class Shape {
public:
    
    virtual void area() {
        cout << "Area not defined for generic shape." << endl;
    }

    
    void area(int l, int w) {  
        cout << "Area (from overloaded function) = " << l * w << endl;
    }
};


class Rectangle : public Shape {
public:
    int length, width;

    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    
    void area() override {
        cout << "Area (from overridden function) = " << length * width << endl;
    }
};

int main() {
    Shape s;
    Rectangle r;

    r.setDimensions(5, 3);

    cout << " Compile-time Polymorphism (Function Overloading) " << endl;
    s.area(4, 6);  

    cout << "\n Run-time Polymorphism (Function Overriding) " << endl;
    Shape* ptr = &r;
    ptr->area();   
    return 0;
}
