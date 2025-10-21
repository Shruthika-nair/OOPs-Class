// 10th sep

#include<iostream>
using namespace std;
class temple_run{
    private:
       int score;
    public:
        void left(void);
        void right(void);
        void get_score(void);
        temple_run(){
            this-> score = 0;
            cout<<"Game started with score"<<score<<endl;
        }

};
void temple_run ::left(void){
    this->score ++;
}
void temple_run ::right(void){
    this->score ++;
}

void temple_run:: get_score(void){
    cout<<"Your score is : "<< this->score<<endl;

}

int main(){
    temple_run p1;
    p1.left();
    p1.right();
    p1.get_score();
}
