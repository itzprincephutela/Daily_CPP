//polymorphism concept
//constructor overloading

//more than one constructor in a class with same name and each must have a different list of argument
//a constructor is called depending upon the number and type of argument passed.

#include<iostream>
using namespace std;

class Employee{
private:
    string empname, empcode;
public:
    Employee()
    {
        cout<<"emp 1: information not available! "<<endl;
    }

    Employee(string name)
    {
        empname=name;
        cout<<"emp2 name: "<<empname<<endl;
    }

    Employee(string name, string code){
        empname=name;
        empcode=code;
        cout<<"emp3 name: "<<empname<<endl;
        cout<<"emp3 code: "<<empcode<<endl;
    }
};

int main(){
    Employee emp1;
    Employee emp2("Ramesh");
    Employee emp3("Alok","emp007");
}
