#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // 1. Default constructor: all zero
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    // 2. Constructor with hours and minutes, seconds defaulted to zero
    Time(int h, int m) {
        hours = h;
        minutes = m;
        seconds = 0;
    }

    // 3. Constructor with hours, minutes, and seconds
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to display time
    void display() {
        cout << hours << "h:" << minutes << "m:" << seconds << "s" << endl;
    }
};

int main() {
    Time t1;           // Default constructor
    Time t2(10, 30);   // Hours and minutes
    Time t3(12, 45, 50); // Hours, minutes, seconds

    cout << "Time t1: "; t1.display();
    cout << "Time t2: "; t2.display();
    cout << "Time t3: "; t3.display();

    return 0;
}
