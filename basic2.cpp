#include<iostream>
#include<queue>
using namespace std;
class queue{
    public:
    int *arr;
    int size;
    int front ;
    int raer ;
    queue(int size){
        arr = new int[size];
        this->size=size;
        front=0;
        raer =0;
    }
    void push(int data){
        if(raer==size){
            cout<<"Raer is full"<<endl;
        }
        else{
            arr[raer]=data;
            raer++; 
        }

    }
    void pop(){
         if(front==raer){
          cout<<"last node";
        }
        else{
            // arr[front]=-1;
            front++;
            if(front==raer){
                front=0;
                raer=0;
            }
        }
        
    }
    bool empty(){
        if(raer==front){
            return true;
        }
        else{
            return false;
        }


    }
    int front(){
        if(front==raer){
            cout<<"empty";
            return -1;
        }
        else{
            return arr[front];
 
        }

    }

};