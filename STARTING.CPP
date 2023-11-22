#include<iostream>
using namespace std;
class hero{
   public:

   int value;
   char name;
   void print(){
    cout<<value<<endl;
   }
   int getvalue(){
    return value;
   }
   int getname(){
    return name;
   }
   int setvalue(int h){
    value=h;
   }
   int setname(int h){
    name=h;
   }
};
int main (){
    hero ramesh;
    ramesh.value=7;
    // ramesh.setname('j');
    // ramesh.setvalue(7);
    cout<<ramesh.getvalue();
    // <<ramesh.getname();
       // ramesh.value=70;
    // ramesh.name='a';
    
}