#include<iostream>
using namespace std;

class Student{
public:
   string name;
   string stud_id;
   int course;

   void display(){
       cout<<"Name: "<<name<<endl;
       cout<<"Student_Id: "<<stud_id<<endl;
       cout<<"Course: "<<course<<endl;
       cout<<endl;
   }

};

int main(){
    Student s1;
    Student s2;
    s1.name = "Deepak";
    s1.stud_id ="CU001";
    s1.course =19;

    s2.name = "Goyal";
    s2.stud_id ="CU007";
    s2.course =20;

    s1.display();
    s2.display();
}
