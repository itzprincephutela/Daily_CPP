#include<iostream>
using namespace std;
void reverse(int arr[], int size ){ 
    int start=0;
    int end=size-1;
   while(start <= end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
   for(int i = 0 ; i < 5 ; i++){
    cout<<arr[i]<<endl;
   }
     
}

void extreme(int arr[],int size){
    int start = 0 ;
    int end = size-1 ;
    while(start<end){
        cout<<start<<" ";
        cout<<end<<" ";
        start++;
        end--;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size = 5;
    extreme(arr,size);
}