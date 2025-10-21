/* Write a program to create a class Employee with data members name,
id, and salary. Implement:
• A constructor that initializes name and id only.
• A constructor that initializes all three values.*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    int salary;

public:
    // Constructor that initializes name and id only
    Employee(string n, int i) {
        name = n;
        id = i;
        salary = 0; // default salary
    }

    // Constructor that initializes name, id, and salary
    Employee(string n, int i, int s) {
        name = n;
        id = i;
        salary = s;
    }

    // Function to display employee details
    void display() {
        cout << "Name  : " << name << endl;
        cout << "ID    : " << id << endl;
        cout << "Salary: " << salary << endl << endl;
    }
};

int main() {
    Employee e1("Alice", 101);          // Name and ID only
    Employee e2("Bob", 102, 50000);     // Name, ID, and salary

    cout << "Employee 1 details:" << endl;
    e1.display();

    cout << "Employee 2 details:" << endl;
    e2.display();

    return 0;
}
