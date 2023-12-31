#include<iostream>
using namespace std;

class Table{
public:
    static int total;
    Table(double n){
        for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        }
        total=total+1;
    }
};
int Table::total=0;
int main(){
    Table t1(8);
    Table t2(4);
    //Table t3(6);
    cout<<Table::total<<endl;

}
