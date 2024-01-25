#include<iostream>
using namespace std ;
int sum_nu(int arr[],int n){
    int sum=0;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}
 int main (){
    int n;
    cin>>n;
    int arr[10];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
  cout<< sum_nu(arr,n);
 }