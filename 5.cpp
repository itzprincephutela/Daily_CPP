#include<iostream>
using namespace std;

class Bankaccount{

   double balance= 2000;

public:
   Bankaccount():balance(2000){}

   void withdraw(int amount){
   if (amount>0){
   balance=balance-amount;
   }
   else{
   cout<<"invalid";
   }
   }
   void deposit(int amount){
   if (amount>0){
   balance=balance+amount;
   }
   else{
   cout<<"invalid";
   }
   }

   void showbalance(){
    cout<<balance<<endl;
   }
};

int main(){
   Bankaccount b1;
   b1.deposit(1000);
   b1.showbalance();
   b1.withdraw(100);
   b1.deposit(1000);
   b1.showbalance();


}
