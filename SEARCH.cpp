#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,2,3,4,5,6,};
    int target =5;
    int n=6;
    for(int i = 0 ; i < n ; i++){
        if(target == arr[i]){
            cout<<"YES!!!!!!!!!"<<arr[i]<<endl;
        }
        else{
            cout<<"NOOOOOOOOOO!!!!!!!!!!!!!!!!!!"<<arr[i]<<endl;
        }
    }
}