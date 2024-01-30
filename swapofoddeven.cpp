#include<iostream>
using namespace std ;
void print(int arr[],int n){
    for(int i = 0 ; i<n ;i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalt(int arr[], int size){
    for(int i = 0 ; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={1,2,3,4,5};
    swapalt(odd,5);
    print(odd,5);
    swapalt(even,8);
    print(even,8);

    
}