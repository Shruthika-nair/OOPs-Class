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
    v1.insert(v1.begin()+1,373); //45,373,9,9,9,9,9,32
        cout<<"size of vector is :"<<v1.size()<<endl; //8
    v1.erase(v1.begin()); //373,9,9,9,9,9,32
    v1.front(); //373   
    v1.pop_back(); //373,9,9,9,9,9
    v1.push_back(23); //373,9,9,9,9,9,23
    auto it1= v1.rbegin(); //pointing to the last element
    for(int i:v1)
    {
        cout<<i<<" "<<endl;
    }
cout<<"size of vector is :"<<v1.size()<<endl; //8


    return 0;

}

// create a method to remive duplicate eleem ts from vetct
