#include<iostream>
using namespace std;
int main (){
    int array[5]={1,42,3,4,5};
    int max =array[0];
    int size = sizeof(array)/sizeof(array[0]);
    for (int i=0;i<size;i++){
        if(array[i]>=max){
        max=array[i];
        }
    }
    cout<<max<<endl;
}