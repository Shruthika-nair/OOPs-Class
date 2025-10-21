// Define a class Employee with private members id and salary. Use
//setters and getters to initialize and display their values. In main(),
//create multiple employees and print their details.

#include <iostream>

using namespace std;

// Define the Employee class
class Employee {
private:
    // Private members to store employee ID and salary
    int id;
    float salary;

public:
    // Setters
    void setId(int newId) {
        id = newId;
    }

    void setSalary(float newSalary) {
        // Basic validation to ensure salary is not negative
        if (newSalary >= 0) {
            salary = newSalary;
        } else {
            cout << "Error: Salary cannot be a negative value." << endl;
        }
    }

    // Getters
    int getId() const {
        return id;
    }

    float getSalary() const {
        return salary;
    }

    // Method to print the employee's details
    void printDetails() const {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};

int main() {
    // Create the first Employee object
    Employee employee1;
    employee1.setId(101);
    employee1.setSalary(50000.0f);

    // Create the second Employee object
    Employee employee2;
    employee2.setId(102);
    employee2.setSalary(65000.50f);

    // Create a third Employee object
    Employee employee3;
    employee3.setId(103);
    employee3.setSalary(72000.75f);

    // Print the details of all three employees
    cout << "--- Employee 1 Details ---" << endl;
    employee1.printDetails();

    cout << "\n--- Employee 2 Details ---" << endl;
    employee2.printDetails();

    cout << "\n--- Employee 3 Details ---" << endl;
    employee3.printDetails();

    // Demonstrate getting individual values
    cout << "\nAccessing Employee 2's ID: " << employee2.getId() << endl;

    return 0;
}
