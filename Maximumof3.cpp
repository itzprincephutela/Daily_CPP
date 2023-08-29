#include<iostream>
using namespace std ;

int main (){
    int a,b,c;
    cin >>a>>b>>c;

    if(a>>b){
        if(a>>c){
        cout<<"A is gratest"<<endl;
    }
    else
    cout<<"C is greatest"<<endl;
    }
    else{
        if(b>c){
            cout<<"B is greatest"<<endl;
        }
        else
        cout<<"C is greatest";
    }
}
