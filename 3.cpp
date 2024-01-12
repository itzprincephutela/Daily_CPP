#include<iostream>
using namespace std;

class Width;

class Length{
private:
   int l;
public:
   Length(int ll){
     l=ll;
     }
     friend void area(Length &l1,Width &w1);
};

class Width{
private:
   int b;
public:
   Width(int wb){
     b=wb;
     }
     friend void area(Length &l1,Width &w1);
};

void area(Length &l1,Width &w1){

     int area;
     area=(l1.l)*(w1.b);
     cout<<"Area: "<<area;
}

int main(){
   Length l1(2);
   Width w1(3);
   area(l1,w1);
}
