//(private Constructor)
//Create a private constructor "Number" which accepts an integer number. Now display the table of the number passed to this private member function
//"showTable()".

#include<iostream>
using namespace std;

class Number{
private:
   double num;
   Number(double n){
       num=n;
       ShowTable(num);
    }

    void ShowTable(double num){
       for(int i=1;i<=10;i++){
            cout<<num<<" * "<<i<<" = "<<num*i<<endl;;
        }}
        friend class Table;
};

class Table{
public:
    Table(){
        double n;
        cin>>n;
        Number n1(n);
    }
};

int main(){
   Table t1;
}
