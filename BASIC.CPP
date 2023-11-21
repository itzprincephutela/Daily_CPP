#include<iostream>
using namespace std;
class hero {
    private:
    int health;
    public:
    int level;
    int gethealth(){
        return health;
    }
    int getlevel (){
        return level;
    }
};
int main(){
     hero h1;
     hero prince;
    //acess private class
    cout << "health : "<< prince.gethealth()<<endl ;
     prince.level = 7;
     cout<< "health : " << prince.level << endl;

     cout << "size : " <<  sizeof(h1) <<endl ;

}