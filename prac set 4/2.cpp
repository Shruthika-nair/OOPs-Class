/* Write a program to create a class Student with data members name,

age, and marks. Implement both a default constructor and a parame-
terized constructor to initialize the data.*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int marks;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        marks = 0;
    }

    // Parameterized constructor
    Student(string n, int a, int m) {
        name = n;
        age = a;
        marks = m;
    }

    // Function to display student details
    void display() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
        cout << "Marks:
