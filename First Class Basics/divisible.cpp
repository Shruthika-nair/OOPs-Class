#include <iostream>
using namespace std;
int main() {
    int a;

   for(int i = 0; i < 3; i++){
        cout << "Enter a number : ";
        cin>>a;
        if(a % 5 == 0){
            cout<< 'Number is divisible by 5\n';
        }
        if(a % 7 == 0){
            cout<< 'Number is divisible by 7\n';
        }
        if(a % 5 == 0 && a % 7 == 0){
            cout<< 'Number is divisible by 5 and 7\n';
        }
        if(a % 5 != 0 && a % 7 != 0){
            cout<< 'Number is not divisible by 5 or 7\n';
        }
   }
return 0;
}