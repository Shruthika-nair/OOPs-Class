/*Implement a class Circle with a private data member radius. Provide
setters and getters, and an additional method getArea() that uses the
getter to calculate the area.*/


#include <iostream>
using namespace std;

class Circle {
private:
    int radius;

public:
    // Setter
    void setRadius(int r) { radius = r; }

    // Getter
    int getRadius() { return radius; }

    // Method to calculate area (integer only)
    int getArea() {
        int r = getRadius();   // using getter
        return 3 * r * r;      // using π ≈ 3 for int result
    }
};

int main() {
    Circle c;

    c.setRadius(5);  // set radius

    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area  : " << c.getArea() << endl;

    return 0;
}
