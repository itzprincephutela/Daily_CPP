#include<iostream>
#include<limits.h>
using namespace std ;
void minimum(int arr[],int size){
    int min=INT_MAX;
    for(int i = 0 ; i <= 6 ;i++){
        if(arr[i]<min){
           min=arr[i];
            cout<<min<<" ";
        }
    }
   
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    minimum(arr,6);
    
}