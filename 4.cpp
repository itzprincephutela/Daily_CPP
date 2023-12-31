#include<iostream>
using namespace std;

class Day{
public:
    int d;
   Day(){
    cin>>d;
     }
};
class Month{
public:
    int m;
   Month(){
    cin>>m;
   }
};
class Year{
public:
    int y;
   Year(){
    cin>>y;
   }
};

int main(){

   Day d1;
   Month m1;
   Year y1;

   cout<<d1.d<<"-"<<m1.m<<"-"<<y1.y;

}
