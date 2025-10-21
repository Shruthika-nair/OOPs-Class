#include <iostream>
using namespace std;
int main(){
    int num ;
    for(int i =0; i < 5; i++){
        cout<< "Enter number "<<  i+1 << ':';
        cin>> num ;
        if(num %2 ==0){
            cout<< "It is even \n";
        }
        else{
            cout<< "It is odd\n";
        }
    }
    return 0;
}