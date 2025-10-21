/* Design a class Book with attributes title, author, and price. Provide
constructor overloading to allow creating:
• Book with title only.
• Book with title and author.
• Book with title, author, and price.*/

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int price;

public:
    // Constructor with title only
    Book(string t) {
        title = t;
        author = "Unknown";
        price = 0;
    }

    // Constructor with title and author
    Book(string t, string a) {
        title = t;
        author = a;
        price = 0;
    }

    // Constructor with title, author, and price
    Book(string t, string a, int p) {
        title = t;
        author = a;
        price = p;
    }

    // Function to display book details
    void display() {
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price : " << price << endl << endl;
    }
};

int main() {
    Book b1("C++ Basics");                 // Title only
    Book b2("Python Guide", "John Doe");  // Title and author
    Book b3("Data Structures", "Alice", 500); // Title, author, price

    cout << "Book 1 details:" << endl;
    b1.display();

    cout << "Book 2 details:" << endl;
    b2.display();

    cout << "Book 3 details:" << endl;
    b3.display();

    return 0;
}
