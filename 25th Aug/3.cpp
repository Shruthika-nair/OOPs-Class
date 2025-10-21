#include <iostream>
#include<string>
using namespace std;
class details {
    private:
    string name;
    int roll_no;
    float marks;

    public:
    void set_value(int nm , float mr, string hl){
        roll_no = nm;
        marks = mr;
        name = hl;
    }
    void get_value(void){
        cout << "name" << name << "marks" << marks << "roll_no" << roll_no << endl; 
        }

};
int main(){
        details s1;
       // s1.name = "Karthik";
       // s1.roll_no = 10;
        // s1.marks = 65.2;
        s1.set_value(10 , 65.2 , "Karthik");
        s1.get_value();
        return 0;
}