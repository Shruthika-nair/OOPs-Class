// VERY IMP 
#include<iostream>
#include<string>
using namespace std;
class university{
    // string name;
    // int Id;

    public:
        virtual void display(){
            // cout<< " Name : " << this->name<<" and id : "<< this->id<<endl;
            cout<<" welcome from class university(base)"<<endl;
        }
};

class student : public university{
    public:
    void display(){
            cout<<" Welcome from class student(DERIVED)" << endl;
    }
};

int main(){
    university *o1;
    university ob;
    o1 = &ob;
    o1 = &ob;
    o1->display();
    student* s1;
    student* sb1;
    s1->display();

    // s1 = (student*)01;
    //o1 = s1; // upcasting // dynamic binding
    o1->display();
    ob.display(); // static binding
    sb1.display(); // static binding
}y7