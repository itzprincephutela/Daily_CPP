#include<iostream>
using namespace std;

class Myclass{
public:
    Myclass(){

        cout<<"Inside Constructor!\n";
    }

    ~Myclass(){

        cout<<"Inside Destructor!\n";
    }
};

int main(){

    int x=0;
    if(x==0){
      static Myclass obj;
    }
    cout<<"End of main\n";
}
