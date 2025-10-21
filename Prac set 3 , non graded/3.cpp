// Write a program that defines a class Book with private members title
//and price. Implement setters and getters for both members, and print
//the details of the book object.




#include <iostream>
#include <string>

using namespace std;

// Define the Book class
class Book {
private:
    // Private members to store the title and price
    string title;
    float price;

public:
    // Default constructor
    Book() {
        title = "Untitled";
        price = 0.0f;
    }

    // Parameterized constructor
    Book(const string& newTitle, float newPrice) {
        title = newTitle;
        price = newPrice;
    }

    // Setter for the title
    void setTitle(const string& newTitle) {
        title = newTitle;
    }

    // Getter for the title
    string getTitle() const {
        return title;
    }

    // Setter for the price
    void setPrice(float newPrice) {
        if (newPrice >= 0) { // Basic validation
            price = newPrice;
        } else {
            cout << "Error: Price cannot be negative." << endl;
        }
    }

    // Getter for the price
    float getPrice() const {
        return price;
    }

    // Method to print the book's details
    void printDetails() const {
        cout << "Book Details:" << endl;
        cout << "  Title: " << title << endl;
        cout << "  Price: $" << price << endl;
    }
};

int main() {
    // Create a Book object using the parameterized constructor
    Book myBook("The Hitchhiker's Guide to the Galaxy", 12.99f);

    // Print the initial details of the book
    cout << "Initial Book Details:" << endl;
    myBook.printDetails();

    cout << endl;

    // Use setters to change the book's title and price
    myBook.setTitle("The Restaurant at the End of the Universe");
    myBook.setPrice(14.50f);

    // Print the updated details
    cout << "Updated Book Details:" << endl;
    myBook.printDetails();

    cout << endl;

    // Demonstrate getting values using the getters
    cout << "Getting values with getters:" << endl;
    cout << "The current title is: " << myBook.getTitle() << endl;
    cout << "The current price is: $" << myBook.getPrice() << endl;

    return 0;
}
