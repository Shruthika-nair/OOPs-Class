// Define a class BankAccount with a private member balance. Provide
//methods setBalance() and getBalance() to update and view the
//balance. Ensure that negative values cannot be assigned.

#include <iostream>

// Use the standard namespace to simplify code
using namespace std;

// Define the BankAccount class
class BankAccount {
private:
    // A private data member to store the account balance.
    // It can only be accessed by methods within this class.
    double balance;

public:
    // A setter method to update the balance.
    // It includes validation to ensure the new balance is not negative.
    void setBalance(double newBalance) {
        if (newBalance >= 0) {
            balance = newBalance;
            cout << "Balance updated successfully." << endl;
        } else {
            cout << "Error: Cannot assign a negative value to the balance." << endl;
        }
    }

    // A getter method to retrieve the current balance.
    // This allows outside code to view the balance without direct access to the private member.
    double getBalance() {
        return balance;
    }
};

// Main function to demonstrate the BankAccount class
int main() {
    // Create an object of the BankAccount class
    BankAccount myAccount;

    // Initialize the balance to a starting value
    myAccount.setBalance(1000.50);

    // Get and display the current balance
    cout << "Current balance is: $" << myAccount.getBalance() << endl;

    // Attempt to set a negative balance to test the validation
    myAccount.setBalance(-50.00);

    // Get and display the balance again to show it has not changed
    cout << "Current balance is still: $" << myAccount.getBalance() << endl;

    // Successfully update the balance to a new positive value
    myAccount.setBalance(1500.75);
    cout << "Current balance is now: $" << myAccount.getBalance() << endl;

    return 0;
}
yyeeu 