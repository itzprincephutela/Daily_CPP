#include <iostream>
using namespace std;
class over
{
public:
int res;
 over(int x,int y){
    res=x*y;
}
over(int x,int y,int z){
    res=x*y*z;
}
int totalnumber(){
    return res;
}
};
int main()
{
    over o1(40, 50);
    over o2(80, 50, 60);
    cout<<"this is ans "<<o1.res<<endl;
    cout<<"this is ans "<<o2.res;

    

}