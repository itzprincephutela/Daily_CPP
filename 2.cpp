#include <iostream>
using namespace std;

class Student{
public:
    double marks;

    Student(double m){
        marks = m;
    }
};

void calculateAverage(Student stud1, Student stud2)
{
    double average = (stud1.marks + stud2.marks)/2;
    cout<<"Average Marks = "<<average<<endl;
}

int main(){

   Student st1(75.0),st2(63);
   calculateAverage(st1,st2);
}
