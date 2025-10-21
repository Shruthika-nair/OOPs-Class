// Print the first 10 even numbers using a while loop.

#include <iostream>
using namespace std;

int main(){
    int count = 0;
    int num = 2 ;

    while(count<10){
        cout<<num<<" ";

        num= num+ 2;
        count++;
    }
    cout<< endl;
    return 0 ;
}