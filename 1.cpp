//access specifier or access modifier
//public and private(there are more but for now)
//default private
//every attribute in the class is private
//data member:attribute of the class
//member function:function in the class
//private: cant be access outside the class. They are private for the class.
//use of private:
#include<iostream>
using namespace std;

class Book{    //every time a constructor is called a object is created
               //every time an object (instance) is created at the runtime
public:
   string title; //privately declared
   string author;
   float cost;

   void open(){

   }
   void read(){

   }
   int bookmark(){

   }
   void close(){

   }

};

int main(){
    Book b1;   //class name object name
    b1.title = "400 days"; //access the attributes of the class
    b1.author ="Chetan Bhagat";
    b1.cost =550;

    cout<<"Title: "<<b1.title<<endl;
    cout<<"Author: "<<b1.author<<endl;
    cout<<"Cost: "<<b1.cost<<endl;

}
