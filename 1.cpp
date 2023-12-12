#include<iostream>
using namespace std;
class rectarea{
    private: //default constructor
    int l;
    int b;
    public:
    // rectarea(){ //non parameter constructor
    //     {
    //         this->l=10;
    //         this->b=5;
    //     }

        rectarea(int l,int b){ //parameter constructor
            this->l=l;
            this->b=b;
        }

        rectarea(rectarea &obj){ //copy constructor
            this->l=obj.l;
            this->b=obj.b;
        }
};
int main() {

    // rectarea obj=rectarea();
    // cout<<"obj.l="<<obj.l<<endl;
    // cout<<"obj.b="<<obj.b<<endl;

    rectarea obj1=rectarea(55,20);
    cout<<"obj1.l="<<obj1.l<<endl;
    cout<<"obj1.b="<<obj1.b<<endl;

    rectarea obj2=obj1;  //copy content from obj1 to obj2
    cout<<"obj2.l="<<obj2.l<<endl;
    cout<<"obj2.b="<<obj2.b<<endl;

    int *ptr1=NULL;
    ptr1=new int;
    float *ptr2=new float(55.2);

    delete ptr1;
    delete ptr2;

    return 0;

}