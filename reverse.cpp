#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;
void reversequeue(queue<int> &q){
     stack<int> s;
     while(!q.empty()){
        int curr = q.front;
        q.pop;
        s.push(curr);
     }
     while(!s.empty()){
            int curr = s.top();
            s.pop();
            q.push(curr);
     }
}
int main (){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.back(50);
    // stack<int> st;
    reversequeue(q);

    

}
