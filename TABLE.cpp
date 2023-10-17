#include<iostream>
using namespace std;

int table (int n){

    for (int i=1 ; i<=10;i=i+2){
        cout<<n*i<<endl;
    }
}
int main (){
    int n;
    cin>>n;
    table(n);
}