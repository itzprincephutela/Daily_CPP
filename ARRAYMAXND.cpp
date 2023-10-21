#include<iostream>
using namespace std;

int largestindex(int array[],int size){
    int max=INT16_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }

    return maxindex;    
}

int main (){
    int array[]={1,9,2,3,4,5,8,1};
    int size=sizeof(array)/sizeof(array[0]);
    int largentnum= largestindex(array,size);
    array[largentnum]=-1;
    cout<<largentnum<<endl;
    int secondnum= largestindex(array,size);
    cout<<secondnum;
    return 0;
}