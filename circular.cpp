#include<iostream>
#include<queue>
using namespace std;
class queue{
    public:
    int *arr;
    int front ;
    int size;
    int raer ;
    queue(int size){
        arr = new int(size);
        this->size=size;
        front = -1;
        raer = -1;
    }
    void push(int data){
        // jab full ho queue
        if(front == 0 && raer == size- 1){
            cout<<"Q is full";
        }
        // jab queue pura khalii ho
        else if(front==-1){
            front = raer = 0;
            arr[raer]=data;
            raer++;

        }
        // raer full ho prr front 0 nhai h pop ho gya hai or element add ho shkte hai
        else if(raer==size-1 && front!= 0){
            raer= 0 ;
            arr[raer]=data;
        }
        else {
               raer++;
                arr[raer]=data;
        }

    }
    void pop(){
        // empty check
        if(front==-1 ){
            cout<<"empty";
        }
        // single element
        else if(front == raer ){
            arr[front]=-1;
            front=-1;
            raer=-1; 
        }
        // circular nature

        // normal flow
        else if( front == size  -  1){
            front = 0;
        }
        else{
            front++;
        }

    }

};