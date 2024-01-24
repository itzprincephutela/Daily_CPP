
#include<iostream>
using namespace std ;
int max_num(int arr[],int size){
    int temp=0;
    for(int i = 0 ; i< size ; i++){
        if(temp<=arr[i]){
            temp=arr[i];
            }
    }
     return temp;
}
int min_num(int arr[],int size){
    int temp=INT16_MAX;
    for(int i = 0 ; i< size ; i++){
        if(temp >= arr[i]){
            temp=arr[i];
            }
    }
     return temp;
}
int main (){
    int size;
    cin>>size;
    int num[100];

    for(int i =0 ; i< size; i++){
        cin>>num[i];
    }
    cout<<max_num(num,size)<<" "<<endl;
    cout<<min_num(num,size)<<" ";
}