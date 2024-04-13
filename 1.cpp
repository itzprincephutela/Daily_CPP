//global friend: can access private and protected members of other class in which it is declared as a friend.
#include<iostream>
using namespace std;


class Product{
private:
   string name,id;
public:
   Product(string pname,string pid){

        name=pname;
        id=pid;
        }
    friend void friendFunc(Product& pr1);
};

void friendFunc(Product &pr1)
{
    cout<<"Product name: "<<pr1.name<<endl;
    cout<<"Product id: "<<pr1.id<<endl;
}

int main(){

   Product prod1("iphone","pr007");
   friendFunc(prod1);
}
