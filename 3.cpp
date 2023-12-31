#include<iostream>
using namespace std;

class Employee{

public:
    static int total;
    Employee(){total+=1;}
};

int Employee::total=0;

int main(){

  Employee e1;
  cout<<"Number of employee: "<<e1.total<<endl;

   Employee e2;
  cout<<"Number of employee: "<<e2.total<<endl;

   Employee e3;
  cout<<"Number of employee: "<<e3.total<<endl;

  //cout<<"Number of employee: "<<Employee::total<<endl;
  }
