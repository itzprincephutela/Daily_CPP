//a member function can also be friend function that can access private and protected members of other class in which it is declared as a friend.
#include<iostream>
using namespace std;

class Product;
class Category{
public:
   void friendFunc(Product& pr1 );
};

class Product{
private:
   string name,id;
public:
   Product(string pname,string pid){

        name=pname;
        id=pid;
        }
    friend void Category:: friendFunc(Product& pr1);
};

void Category::friendFunc(Product &pr1)
{
    cout<<"Product name: "<<pr1.name<<endl;
    cout<<"Product id: "<<pr1.id<<endl;
}

int main(){

   Product prod1("iphone","pr007");
   Category cat1;
   cat1.friendFunc(prod1);
}
