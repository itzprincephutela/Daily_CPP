#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> p;
    p.push(5);
    p.push(1);
    p.push(4);
    p.push(6);
    cout<<"size of queue : "<<p.size()<<endl;
    p.pop();
    cout<<"size of queue : "<<p.size()<<endl;
    cout<<"Front : "<<p.front()<<endl;
    if(p.empty()){
        cout<<"empty";
    }
    else{
        cout<<"not empty";
    }

}