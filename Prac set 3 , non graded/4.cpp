/* 4. Create a class Rectangle with private data members length and width.
Write setter and getter methods and calculate the area using them.*/

#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
private:
    int length;
    int width;

public:
    // Setters
    void setLength(int l) { length = l; }
    void setWidth(int w) { width = w; }

    // Getters
    int getLength() { return length; }
    int getWidth() { return width; }

    // Method to calculate area
    int getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    // Set values
    rect.setLength(10);
    rect.setWidth(4);

    // Print details
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width : " << rect.getWidth() << endl;
    cout << "Area  : " << rect.getArea() << endl;

    return 0;
}
