#include<iostream>
using namespace std;

class A{
    public:
    int a ;
};

class B{
    public:
    int b ;
};

int main(){
    A* oa;
    B* ob;

    oa = (A*)ob;
    oa->a = 4 ;
    cout<< "value of a "<< oa->a<< endl;

    return 0 ;
}