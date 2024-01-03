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

void editinfo(Employee *ptr,string nm,string ec){

     ptr->name = nm;
     ptr->ecode = ec;
     cout<<"Inside function name: "<<ptr->name<<endl;
     cout<<"Inside function ecode: "<<ptr->ecode<<endl;
     }

int main(){

   string nm,ec;
   Employee e1("Ram","emp001");
   cout<<"Edit name :";
   cin>>nm;
   cout<<"Edit ecode: ";
   cin>>ec;
   editinfo(&e1,nm,ec); //we pass the address by the functions
   cout<<"After editing: \n";
   cout<<"New name: "<<e1.name<<endl; //value for the function only if there would have been address then there would be there
   cout<<"New ecode: "<<e1.ecode<<endl; // the scope of pass by value is till the function only as obj is considered different obj then e1a
}
