#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor
    MyString(string s = "") {
        str = s;
    }

    // (a) Capitalize
    string capitalize() {
        string temp = str;
        for (int i = 0; i < (int)temp.size(); i++) {
            if (temp[i] >= 'a' && temp[i] <= 'z') {
                temp[i] = temp[i] - 'a' + 'A';
            }
        }
        return temp;
    }

    // (b) To Lower
    string to_lower() {
        string temp = str;
        for (int i = 0; i < (int)temp.size(); i++) {
            if (temp[i] >= 'A' && temp[i] <= 'Z') {
                temp[i] = temp[i] - 'A' + 'a';
            }
        }
        return temp;
    }

    // (c) Search letter
    bool search_letter(char ch) {
        for (int i = 0; i < (int)str.size(); i++) {
            if (str[i] == ch) {
                return true;
            }
        }
        return false;
    }

    // (d) Find index
    int find_index(char ch) {
        for (int i = 0; i < (int)str.size(); i++) {
            if (str[i] == ch) {
                return i;
            }
        }
        return -1; // Not found
    }

    // (e) Update index
    void update_index(int pos, char ch) {
        if (pos >= 0 && pos < (int)str.size()) {
            str[pos] = ch;
        } else {
            cout << "Invalid position!" << endl;
        }
    }

    // (f) Add string
    void add_string(string s) {
        str = str + s;
    }

    // (g) Delete char
    void delete_char(int pos) {
        if (pos >= 0 && pos < (int)str.size()) {
            str.erase(pos, 1);
        } else {
            cout << "Invalid position!" << endl;
        }
    }

    // Display string
    void display() {
        cout << str << endl;
    }
};

// Example usage
int main() {
    MyString s("Hello World");

    cout << "Original: ";
    s.display();

    cout << "Capitalized: " << s.capitalize() << endl;
    cout << "Lowercase: " << s.to_lower() << endl;

    cout << "Search 'W': " << (s.search_letter('W') ? "Found" : "Not Found") << endl;
    cout << "Index of 'o': " << s.find_index('o') << endl;

    s.update_index(0, 'h');
    cout << "After update: ";
    s.display();

    s.add
