
#include<iostream>
using namespace std ;
class university{
    private:
        int ID;
        string name;
    public:
        university( int id , string name){
            this->ID=id;
            this->name=name;
        }
        void get_details(){
            cout<<"Name:" <<name<<"ID :"<<id<<endl;
        }
};
class students{
    private:
        int id;
        int course_code;
        string name;
        string school;
    public:
        students( int id , int cours_code , string name , string school){
            this->course_code = course_code;
            this->id = id;
            this->name=name;
            this->school = school;
        }
};
void get_details2(){
    cout<<"Name:"<<name<<"ID"<<id<<"course code"<<course_code<<<"school"<<school;
};

int main(){
    university u1(123 , "Arjun");
    u1.get_details();
    students s1(123,02,"Arjum Thilak" , "SCDS");
    s1.get_details();

    return 0 ;
}