#include<iostream>
using namespace std;

class Multiply{
private:
    int ma,mb;
    float mc,md;
public:
    Multiply(int a,int b){
        ma=a;
        mb=b;
        cout<<ma*mb<<endl;
    }

    Multiply(float c,float d){
        mc=c;
        md=d;
        cout<<mc*md<<endl;
    }

};

int main(){
    float a=2.2,b=3.4;
    Multiply m1(2,3);
    Multiply m2(a,b);
    }
