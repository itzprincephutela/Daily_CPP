#include<iostream>
using namespace std;
class bar{
    private:
    int drink;
    int people;
    public:
    bar(int b,int p){
        drink=b;
        people=p;
    }
    int totalcash(){
        return drink*people;
    }


};
int main (){
    bar b(40,5);
    cout<<"total cash "<< b.totalcash();
}