
/* function 1 compare two argument of int type and function 2 compares float and return the max/min value*/

#include<iostream>
using namespace std;
int compare(int a , int b){
    return a>b ?a : b;
}
float compare(float a1 , float b1 ){
    return a1>b1 ?a1 : b1;
}
int main(){
    int a = 4 , b = 10;
    int c = compare(a,b);
    cout<<"The Max value is : "<<c<<endl;
    float a1 = 5.5 , b1= 9.5;
    float c1 = compare(a1,b1);

    cout<<"The Max value is : "<<c1<<endl;

    return 0 ;
}