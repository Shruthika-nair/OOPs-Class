#include <iostream>
using namespace std;
#include <vector>
#include <set>

int main(){
    vector<int> v1(5,9); //(size,element) (9,9,9,9,9)
    for (int i:v1)
    {
        cout<<v1[i]<<" "<<endl;
    }
    auto it= v1.begin();//pointing to the firts element 
    cout<<"element is :"<<*it<<endl; //9
    v1.insert(v1.begin(),45); //45,9,9,9,9,9
    v1.insert(v1.end(),32); //45,9,9,9,9,9,32
    for(int i:v1)
    {
        cout<<i<<" "<<endl;
    }

    return 0;
}