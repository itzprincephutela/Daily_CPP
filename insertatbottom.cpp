#include<iostream>
#include<stack>

using namespace std;

void bottom(stack<int> &str, int tar) {
    if (str.empty()) {
        str.push(tar); // Base case: if stack is empty, push the target element
        return; 
    }
    
    int temp = str.top();
    str.pop();
    bottom(str, tar); // Recursive call to push the target element to the bottom
    
    str.push(temp); // Push the elements back onto the stack after the recursive call
}
int main() {
    stack<int> str;
    str.push(10);
    str.push(20);
    str.push(30);
    str.push(40);
    int target = 5; // Element to be placed at the bottom of the stack
    
    bottom(str, target); // Call the bottom function
    
    while (!str.empty()) {
        cout << str.top() << " ";
        str.pop();
    }
    cout << endl;

    return 0;
}
