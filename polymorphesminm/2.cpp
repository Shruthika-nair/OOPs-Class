#include <iostream>
using namespace std ; 
int main(){
    int i = 2 ;
    double j = 3.5;
    int *iptr = &i;
    double *dptr = &j;
// iptr = dptr ; // implicit casting doesnt work with pointers
    iptr = (int*)dptr; // double to integer
    dptr= (double*)iptr; // explcit casting integer to double 
// cout<<*iptr<<endl;
//cout<<*dptr<< endl;

    return 0 ; 
}