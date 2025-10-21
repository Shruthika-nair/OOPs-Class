#include <iostream>
using namespace std;

class university{
    private:
        int id;
        string name;
    public:
        university(int id, string name){
            this->id = id;
            this->name = name;
        }
        void get_details(){
            cout<<"University id: "<<id<<endl;
            cout<<"University name: "<<name<<endl;
        }
};

class student:public university{
    private:
        int roll_no;
        string school;
    public:
        student(int roll_no, string school, string name, int id):university(id,name){
            this->roll_no = roll_no;
            this->school = school;
        }
        void get_student(){
            cout<<"roll number:"<<roll_no<<endl;
            cout<<"school name: "<<school<<endl;
        }
};
class class_rep : public student{
    private:
        int task;
        string course;
    public:
        class_rep(int task, string course, int roll_no, string school, string name, int id):student(roll_no,school,name,id){
            this->task=task;
            this->course=course;
        }
        void get_cr(){
            cout<<"task: "<<task<<endl;
            cout<<"course: "<<course<<endl;
        }
};
class teacher:public university{
    private:
        int emp_id;
        string dept;
    public:
        teacher(int emp_id, string dept, string name, int id):university(id,name){
            this->emp_id = emp_id;
            this->dept = dept;
        }
        void get_teacher(){
            cout<<"employee id: "<<emp_id<<endl;
            cout<<"department: "<<dept<<endl;
        }
};
class president: public university{
    private:
         int president_id ;
         string president_name;
    public:
         president(int president_id , string president_name , string name , int id):university(id , name){
            this->president_id = president_id;
            this-> president_name = president_name;
         }
        void get_president(){
            cout<<"president name: " << president_name << endl;
            cout<<"president id: " << president_id<<endl;
        }
    class math_course
    class regisry : public student , public math_course

        book k ;
        public:
        regisry(bool k , intnassign , string course , string name , int roll_no) : math_course(course , assign) , student(roll_no){
            if(k == )
        }

};
int main(){
    class_rep c1(5,"C++",101,"ABC School","XYZ University",1);
    c1.get_cr();
    c1.get_student();
    c1.get_details();
    teacher t1(201,"CSE","XYZ University",1);
    t1.get_teacher();
    president p1(24 , " shruthika", " sai university" , 234556);
    p1.get_president();
    return 0;
}create two classes matrixes 4 elements  and vector of 1 dimention