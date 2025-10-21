/* Create a program that demonstrates multiple inheritance. Example: A class
SportsPerson inherits from both Person and Athlete. Explain what ambiguity
arises and how you resolved it using scope resolution or virtual base classes.*/

#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "I am a Person." << endl;
    }
};


class Athlete {
public:
    void show() {
        cout << "I am an Athlete." << endl;
    }
};


class SportsPerson : public Person, public Athlete {
public:
    void tell() {
        cout << "I am a SportsPerson." << endl;
    }

    void showPersonInfo() {
        Person::show();   
        Athlete::show();  
    }
};

int main() {
    SportsPerson sp;

    sp.tell();
    sp.showPersonInfo();

    return 0;
}
