// keep asking the user for the number until the sum becomes more than 50

#include <iostream>
using namespace std;
int main() {
    int num;
    int sum = 0;

    while(sum>50){
        cout<<" enter a number:";
        cin>>num;
        sum += num;
    }
    cout<<"The sum has exceeded 50";
    return 0;
}