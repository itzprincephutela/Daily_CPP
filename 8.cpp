#include<iostream>
using namespace std;

class Number{
private:
   double num;
public:
    Number(double tnum){
      num=tnum;
    }
    friend class Table;
};

class Table{
public:
    void showTable(Number &n1){
        for(int i=1;i<=10;i++){
        cout<<n1.num<<"*"<<i<<"="<<n1.num*i<<endl;
        }
    }
};

int main(){

   Number n1(7);
   Table t1;
   t1.showTable(n1);
}
