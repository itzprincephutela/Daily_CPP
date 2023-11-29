#include<iostream>
using namespace std;
class demo {
    int x,y,z;
    public :
    void getdata(int a, int b , int c){
        x=a;
        y=b;
        z=c;
    }
    void display ();
    void operator -();
     
};
void demo :: display(){
    cout<<x<<" ,"<<y<<" ,"<<y<<endl;
}
void demo :: operator-(){
    x=-x;
    y=-y;
    z=-z;
}
int main (){
    demo obj;
    obj.getdata(4,5,6);
    obj.display();
    -obj;
    obj.display();


    
}