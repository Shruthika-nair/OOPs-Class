#include<iostream>
using namespace std;
class base{
    public:
        virtual print(){
            cout<<"Welcome from base class"<<endl;

        }
};
class derived :public base{
    public:
        void print(){
            cout<<"welcome from derived class"<<endl;
        }
};

int main(){
    base b;
    base* bptr;
    bptr = &b;
    derived d ;
    derived* dptr;
    dptr =&d;
   // b.print();// base:: print
    //d.print(); //derived:: print
   // bptr->print();// base :: print
   // dptr->print(); // derived :: print
    bptr = dptr ; // bptr = (dtptr*) bptr // upcasting
    
    return 0 ;
}