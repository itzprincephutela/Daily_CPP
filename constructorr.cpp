// #include<iostream>
// using namespace std;
// class Person{
//     int age;
//     string name;
//     public:

//     Person(){
//         age = 12;
//         name = 'Prince';

//     }
//     Person(int a,string n){
//         age = a;
//         name = n;
//     }
//     void disp(){
//         cout << age << name << endl;
//     }
// };
// int main(){
//     Person p;

//     cout << age;
//     cout << name;
    
//     }


//  cube
// #include<iostream>
// using namespace std ;
// class cube {
    
//     public :
//     int side ;
//     cube (){
//         side=10;
//     }
//     int display(){
//         return 6*side*side;
//     }
// };

// int main (){
//     cube b;
//     cout<<b.side;
//         cout<<"this is side of cube "<<b.display();

// }



#include<iostream>
using namespace std ;
class cube {
    public:
    int side;
    cube(int s){
    side = s;
    }
    void display(){
       cout<< side*side *6;
            }
    
};
int main (){
    cube c(10);
    c.display();

}

// //CREATING PARAMETERIZED CONSTRUCTOR
// #include <iostream>
// using namespace std;
// class Employee 
// {
//   public: string name; int age; float sal;
//    Employee(string n,int a, float s) // Parameterized constructor
//    { 
//      name=n;      age=a;       sal=s;
//    }
//    void disp()
//    {
//    	cout<<"Emp name: "<<name<<" emp age: "<<age<<" emp sal "<<sal<<endl;
//    }
// };
// int main() {
//   Employee e1("sachin",52,150000.00); 
//   Employee e2("Virat",40,170000.00);
//   Employee e3("Rohit",38,180000.00);
//   e1.disp();e2.disp();e3.disp();
//   return 0;
// }
