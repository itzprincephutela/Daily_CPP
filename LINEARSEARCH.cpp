#include<iostream>
using namespace std ;
int main (){
    int array[]={1,2,3,4,5,6};
    int n=5;
    int ans =-1;
    int size=sizeof(array)/sizeof(array[0]);
    for (int i =0 ; i<size ;i++){
        if(array[i]==n){
           ans=i;
        }

    }
    cout<<ans<<endl;
    return 0;
}