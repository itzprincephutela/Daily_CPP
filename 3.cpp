#include<iostream>
using namespace std;
class address{
    public:
    string state;

    void initState(string state){this->state=state;}
};
int main(){
    address obj;
    obj.initState("Punjab");
    cout<<obj.state;
    return 0;
}
