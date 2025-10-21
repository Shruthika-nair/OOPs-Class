/* Implement a program demonstrating multilevel inheritance. For example: Person
→ Employee → Manager. Show how data and functions are passed through the
inheritance chain. Explain why access specifiers matter here.*/

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }

    void showPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Employee : public Person {
protected:
    int empID;
    float salary;

public:
    void setEmployeeData(int id, float s) {
        empID = id;
        salary = s;
    }

    void showEmployeeData() {
        cout << "Employee ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
    }
};


class Manager : public Employee {
    string department;

public:
    void setManagerData(string dept) {
        department = dept;
    }

    void showManagerData() {
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    
    m.setPersonData("Shruthika", 22);
    m.setEmployeeData(101, 55000);
    m.setManagerData("Operations");

    cout << "Manager Details:" << endl;
    m.showPersonData();
    m.showEmployeeData();
    m.showManagerData();

    return 0;
}
