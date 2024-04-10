#include<iostream>
#include<stack>
using namespace std;
void middle(stack<int> &str,int totalsize){
    if(totalsize/2+1==str.size()){
        cout<<"MIDDLE ELEMENT : "<<str.top()<<endl;
    }
        int temp=str.top();
        str.pop ();
    
    // recursion call
    middle(str,totalsize);
    str.push(temp);
}
int main(){
    stack<int> str;
    str.push(10);
    str.push(20);
    str.push(30);
    str.push(40);
    str.push(50);
    str.push(60);
    str.push(70);
    int totalsize=str.size();
     middle(str,5);
     while(!str.empty()){
        cout<<str.top()<<endl;
        str.pop();

     }

}
