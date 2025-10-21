#include<iostream>
using namespace std;
// example of overriding 

class base{
    public:
         void fun1(){
            cout<<"fun1 from class base"<<endl;

    }
};
class derived : public base{
    public:
    using base :: fun1;
    // void fun1(){// this method overrides base class method i}
    //  cout<<"fun1 from class derived"<<endl;
};

int main(){
    base b ; 
    derived d ;
    b.fun1();
    d.fun1();
    //d.fun

    return 0 ; 
    
}