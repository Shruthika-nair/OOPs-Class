/* Write a program where two different class objects share data using a friend
function. For example, a class Student and a class Sports share marks and
scores. Explain why the friend function was needed instead of a member function.*/

#include <iostream>
using namespace std;

class Sports;  

class Student {
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

   
    friend void displayTotal(Student s, Sports sp);
};

class Sports {
    int score;

public:
    void setScore(int s) {
        score = s;
    }

    
    friend void displayTotal(Student s, Sports sp);
};

void displayTotal(Student s, Sports sp) {
    int total = s.marks + sp.score;
    cout << "Academic Marks: " << s.marks << endl;
    cout << "Sports Score: " << sp.score << endl;
    cout << "Total (Marks + Score): " << total << endl;
}

int main() {
    Student st;
    Sports sp;

    st.setMarks(78);
    sp.setScore(20);

    displayTotal(st, sp);

    return 0;
}
