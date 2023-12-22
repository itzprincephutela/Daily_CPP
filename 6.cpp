#include<iostream>
using namespace std;
class Person{
public:
    string p_name ;
    int p_age;
    string p_email;
    void showinfo()
    {
      cout<<"Name :"<<p_name<<endl;
      cout<<"Age  :"<<p_age<<endl;
      cout<<"Email :"<<p_email<<endl;
      cout<<endl;
    }
};
int main()
{
  Person p1,p2;
  p1.p_name="Rahul";
  p1.p_age=34;
  p1.p_email="rahul123@gmail.com";
  p1.showinfo();
  p2.p_name="Firoz";
  p2.p_age=45;
  p2.p_email="firoz321@gmail.com";
  p2.showinfo();
}
