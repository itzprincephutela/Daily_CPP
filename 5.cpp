#include<iostream>
using namespace std;

class Book{
//private:
public:
   string title;
   string author;
   float cost;
//public:
   void show(){
       cout<<"Title: "<<title<<endl;
       cout<<"Author: "<<author<<endl;
       cout<<"Cost: "<<cost<<endl;
       cout<<endl;
   }

};

int main(){
    Book b1;
    Book b2;
    b1.title = "400 days";
    b1.author ="Chetan Bhagat";
    b1.cost =550;

    b2.title = "500 days";
    b2.author ="Chetan Bhagat";
    b2.cost =650;

    b1.show();
    b2.show();
}
/*homework:
//class name: Person
//Attributes:
p_name
p_age
p_email

functionshowinfo() - to display person's properties

object1 = 'Rahul', 34, 'rahul123@gmail.com'

object2 = 'Firoz', 45, 'firoz321@gmail.com'
*/
