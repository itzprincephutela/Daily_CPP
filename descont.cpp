#include<iostream>
using namespace std;
class formula {
    int speed ;
    int avg;
    public:
    formula(int s ,int a){
        speed=s;
        avg=a;
    }
    void display (){
        cout<< "this is speed "<< speed<<endl;
        cout<<"this avg "<<avg<<endl;
    }
    ~formula(){
        cout<<"this is desc";
    }

};
int main (){
    formula f1(20,6);
f1.display();
}