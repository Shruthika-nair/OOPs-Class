#include<iostream>
using namespace std;
#include<string.h>
class marks{
    public:
float phy;
float chem;
float oop;
};
int main(){
marks m;

cout<<"enter phy marks:"<<endl;
cin>>m.chem;
cout<<"enter chem marks:"<<endl;
cin>>m.phy;
cout<<"enter opp marks:"<<endl;
cin>>m.oop;
float avg=(m.chem+m.phy+m.oop)/3;
cout<<"the avg is :"<<avg;
return 0;


}