#include<iostream>
using namespace std;
class queue{
    public:
    int *arr;
    int size;
    int front;
    int raer;
    queue(int size){
        this->size=size;
        arr= new int [size];
        front = -1;
        raer= -1;
    }
    void pushfront(int data){
        if(front == 0 && raer == size){
            cout<<"Queue is full";
            return;
        }
        else if(front == -1){
            front=raer=0;
                arr[front]=data;
        
        }
        else if(front == 0 && raer != size - 1){
                  front = size-1;
                arr[front]=data;

        }
        else{
            arr[front]=data;
            front--;
        }

    }
    void pushraer(int data){
             if(front == 0 && raer == size){
                cout<<"Queue is full";
                
             }
             else if(front == -1 ){
                front = raer = 0;
                arr[raer]=data;
             }
             else if(raer == size-1 && front != 0){
                raer=0;
                arr[raer]=data;
             }
             else{
                   raer++;
                arr[raer]=data;
             

             }
    }
    void pop1(){

    }
    void pop2(){

    }

};
int main(){

}