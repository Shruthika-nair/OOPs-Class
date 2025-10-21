#include<iostream>
using namespace std;
class base {
    public:
    int a = 4;
};

class derived : public base{
    public : int b = 5 ;
    int c = 6 ;
};
// we get acces to more data members that is upcasting , derived to base 
// downcasting is converting base class to derived class pointer 
int main(){
    base ob;
    base* obptr = &ob;
    cout<<"value of a in base class" << obptr->a<<endl;
    derived od;
    derived* odptr = &od;
    obptr = odptr; // upcasting // implicit casting is allowed here.
    // cout<<"value of a "<<obptr ->a<<endl;
    // odptr =(derived*)obptr;// explicit casting downcasting


    cout<<" values of a , b and c is derived class are :" <<odptr->a<<" "<<odptr->b << " " << odptr->c<<endl;
    return 0;
}