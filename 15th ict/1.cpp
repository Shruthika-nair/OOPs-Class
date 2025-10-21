#include<iostream>
using namespace std;
namespace mythings{
    int uv;
    void greet(){
        cout<<"good afternoon"<<endl;

    }
    class simple{
        int a;
        public:
            simple(int n){
                this->a=n;
            }
            void get_value(){
                cout<<"value of a : "<<a<<endl;
            }
    };
};

int main(){
    mythings::uv=10;
    cout<<"value of uv is "<<mythings::uv<<endl;
    mythings :: greet();
    
    return 0;
}