    // #include<iostream>
    // using namespace std;
    // class stack{
    //     public:
    //     int *arr;
    //     int top;
    //     int size;
    //     stack(int size){
    //         arr= new int[size];
    //         this->size=size;
    //         top=-1;

    //     }
    //     // function
    //     void push(int data){
    //         if(size-top>1){
    //             // space available
    //             top++;
    //             arr[top]=data; 

    //         }
    //         else{
    //             cout<<"overflow"<<endl;
    //         }

    //     }
    //     void pop(){
    //         if(top == -1){
    //             cout<<"underflow"<<endl;
    //         }
    //         else{
    //             top--;
    //         }
                
    //     }
    //     bool isempty(){
    //         if(top==-1){
    //             return true;
    //         }
    //         else{
    //             return false;
    //         }

    //     }
    //     int gettop(){
    //         if(top==-1){
    //         cout<<"empty";
    //         }
    //         else{
    //             return arr[top];
    //         }
    //     }
    //     int getsize(){
    //     return top+1;
    //     }



    // };

    // int main(){

    // stack str(10);
    // // insertion;
    //     // str.push(5   );
    //     str.push(4);
    //     str.push(3);
    //     str.push(2);
    //     str.push(1);
    //     // delection;
    //     // str.pop();
    //     // last element;
    //     // cout<< "elemnent on top "<<str.gettop()<<endl;
    // // cout<<"kya stack khali hai "<< str.isempty()<<endl; 
    // // cout<<"size of stack "<< str.getsize()<<endl; 

    // while (!str.isempty()){
    //             cout<<str.gettop() <<" ";
    //             str.pop();
    // }
    // cout<<endl;

    //     return 0;

    // }






#include<iostream>
using namespace std;
class stack{
    public:
    int* arr;
    int size;
    int top;
     stack(){
        this->size=size;
        top=-1;
        arr = new int[size];
    }
    void push(int data){
        if(size-top > 1){
            // space hai dall dao;
            top++;
            arr[top]=data;
        }
    }

void pop(){
    if(top == -1 ){
    cout<<"underflow";
}
else{
    top--;
}
}
int getdata(){
    return top+1;
}
int gettop(){
    if(top==-1){
        cout<<"there is no stack";
    }
    else{
      return arr[top];
    }
}
bool isempty(){
     if(top==-1){
                return true;
            }
            else{
                return false;
            }
}
}   ; 
