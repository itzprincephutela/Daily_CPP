#include<iostream>
using namespace std;

class Employee{
public:
     string name,ecode;
     Employee(string nm,string ec){

          name = nm;
          ecode = ec;
          cout<<"Employee name: "<<name<<endl;
          cout<<"Employee ecode: "<<ecode<<endl;
          }
};

void editinfo(Employee &obj,string nm,string ec){  //memory address is same
     obj.name = nm;
     obj.ecode = ec;
     cout<<"Inside function name: "<<obj.name<<endl;
     cout<<"Inside function ecode: "<<obj.ecode<<endl;
     }

int main(){

   string nm,ec;
   Employee e1("Ram","emp001");
   cout<<"Edit name :";
   cin>>nm;
   cout<<"Edit ecode: ";
   cin>>ec;
   editinfo(e1,nm,ec);//we the object by reference
   cout<<"After editing: \n";
   cout<<"New name: "<<e1.name<<endl; //the name is changed in pass by reference
   cout<<"New ecode: "<<e1.ecode<<endl;
}
