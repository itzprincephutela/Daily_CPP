#include <iostream>
using namespace std;

class Student{
public:
    double marks, average;
};

Student calculateAverage(Student stud1, Student stud2)  //returning object as the return from function and it's data type is its class thus we write class at the return type
{
    Student result; //class is the data type of the object returning variable

    result.average = (stud1.marks + stud2.marks)/2; //accessing the members of the class through object

    return result;
}

int main(){

   Student s1,s2,avg;
   s1.marks = 98.2;
   s2.marks = 83;
   avg=calculateAverage(s1,s2);
   cout<<"Average: "<<avg.average; //again the returned value is an object thus accessing through dot operator
   }
