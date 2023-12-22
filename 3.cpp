//better then before
#include<iostream>
using namespace std;

class Book{
public:
   string title;
   string author;
   float cost;

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
