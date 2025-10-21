#include <iostream>
using namespace std;

class SimpleList {
    int arr[100];   
    int size;       
public:
   
    SimpleList() {
        size = 0;   
    }

    
    void add(int element) {
        arr[size] = element;
        size++;
        cout << element << " added." << endl;
    }

    
    void remove(int element) {
        int found = -1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                found = i;
                break;
            }
        }

        if (found != -1) {
            for (int i = found; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
            cout << element << " removed." << endl;
        } else {
            cout << "Element not found." << endl;
        }
    }

    
    void display() {
        cout << "List: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    
    void getSize() {
        cout << "Size: " << size << endl;
    }
};

int main() {
    SimpleList list;

    list.add(40);
    list.add(60);
    list.add(20);

    list.display();
    list.getSize();

    list.remove(20);

    list.display();
    list.getSize();

    return 0;
}
