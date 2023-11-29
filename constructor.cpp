#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    // creating constructor
        //constructor is a special member fuction with the same name of the class;
    complex(void);
    void printnumber(){
        cout<<"THIS IS NUMBER"<<a <<"+"<< b  <<'i'<<endl;
    }  

};
complex :: complex(void){
    a=10;
    b=0;
}
int main (){
    complex c;
    c.printnumber();
   return 0;

}