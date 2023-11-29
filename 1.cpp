//pass by value
#include<iostream>
using namespace std;

void swap(int *a, int *b){
int *y;
*y=*a;
*a=*b;
*b=*y;
}
int main(){
int a,b;
cin>>a>>b;
cout<<a<<"\t"<<b<<"\n";
swap(a,b);
cout<<a<<"\t"<<b;
return 0;
}
