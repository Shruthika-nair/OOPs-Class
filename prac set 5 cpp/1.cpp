/* Friend Functions
1. Write a C++ program to demonstrate a friend function that accesses
private members of two different classes.
2. Implement a friend function that allows two classes to share a common
function to add private variables.
3. Create a class Rectangle with private length and width and use a friend
function to calculate the area.
4. Write a program where a friend function swaps private variables of
two classes.
5. Implement a friend function to compare two objects of a class based
on private data.*/

// 1

#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int a;
public:
    ClassA(int x) { a = x; }
    friend void showSum(ClassA, ClassB);
};

class ClassB {
private:
    int b;
public:
    ClassB(int y) { b = y; }
    friend void showSum(ClassA, ClassB);
};

// Friend function
void showSum(ClassA obj1, ClassB obj2) {
    cout << "Sum of private members: " << obj1.a + obj2.b << endl;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);
    showSum(objA, objB);
    return 0;
}

// 2

#include <iostream>
using namespace std;

class ClassY; // Forward declaration

class ClassX {
private:
    int x;
public:
    ClassX(int val) { x = val; }
    friend int add(ClassX, ClassY);
};

class ClassY {
private:
    int y;
public:
    ClassY(int val) { y = val; }
    friend int add(ClassX, ClassY);
};

int add(ClassX a, ClassY b) {
    return a.x + b.y;
}

int main() {
    ClassX objX(15);
    ClassY objY(25);
    cout << "Sum using friend function: " << add(objX, objY) << endl;
    return 0;
}

// 3

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;
public:
    Rectangle(int l, int w) { length = l; width = w; }
    friend int calculateArea(Rectangle);
};

int calculateArea(Rectangle r) {
    return r.length * r.width;
}

int main() {
    Rectangle rect(5, 10);
    cout << "Area of Rectangle: " << calculateArea(rect) << endl;
    return 0;
}

// 4
