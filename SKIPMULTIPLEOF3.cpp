#include<iostream>
using namespace std;

int main (){
    
    for(int n = 0 ; n<=100 ; n++ ){
        if(n%3==0){
            continue;
        }
        cout<<"this is not divisible by 3:"<<n<<endl;
    }
    }