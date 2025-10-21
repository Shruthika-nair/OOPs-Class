/* Design a class that mimics a dictionary or map functionality — where you
can store key-value pairs, search for a key, and display all pairs. Explain why
encapsulation is important in this implementation.*/

#include <iostream>
using namespace std;

class dictionary {
private:
    string keys[100];
    string values[100];
    int size;

public:

    dictionary() {
        size = 0;
    }

    
    void add(string key, string value) {
        keys[size] = key;
        values[size] = value;
        size++;
        cout << "added (" << key << ": " << value << ")" << endl;
    }

   
    void search(string key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                cout << "Found: " << key << " => " << values[i] << endl;
                return;
            }
        }
        cout << "Key not found." << endl;
    }

    
    void display() {
        cout << "Dictionary contents:" << endl;
        for (int i = 0; i < size; i++) {
            cout << keys[i] << " : " << values[i] << endl;
        }
    }
};

int main() {
    dictionary dict;
    dict.add("Name", "Shruthika");
    dict.add("City", "Coimbatore");
    dict.add("Hobby", "eating kalaki");

    dict.display();
    dict.search("City");
    dict.search("Age");

    return 0;
}
