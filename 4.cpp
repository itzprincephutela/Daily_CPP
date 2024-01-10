//a copy constructor is a member function of a class that initializes an object with an existing object of the same class
//it create  an exact copy of an already exiting object and store it in a new object.
//Copy constructor take takes a reference to an object of the same class as an argument.
//there are two types of copy constructor:
//default copy constructor:
//   if the user does not define any copy constructor, compiler defines it automatically
//user-defined copy constructor:
//   defined by the programmer
//a copy constructor is an overloaded constructor used to declare and initialize an object from another existing object of the same class.

#include<iostream>
using namespace std;

class Employee{

public:
   string empname,empcode,empdept;
   Employee(string ename,string ecode){
      empname=ename;
      empcode=ecode;
      }
    };

int main(){
   Employee e1("Ramesh","emp001");
   Employee e2=e1;
   cout<<"Employee name: "<<e1.empname<<endl;
   cout<<"Employee code: "<<e1.empcode<<endl;

   cout<<"Employee name: "<<e2.empname<<endl;
   cout<<"Employee code: "<<e2.empcode<<endl;
   e1.empdept="Sales";  //no changes are reflected made in the original after the copy is made
   cout<<e2.empdept<<endl; // if there is change in the original object after the copy is created then the changes are not reflected in the copy
   }
