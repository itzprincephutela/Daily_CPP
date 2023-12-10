#include<iostream>
using namespace std;

void findkey(int arr[5],int key){
    int i;
    bool foundit=false;
    for(i=0;i<5;i++){
        if(arr[i]==key){
            foundit = true; 
            break;
        }

    }
    if(foundit){cout<<key<<"Found azt array index"<<i<<endl;}

    else{
        cout<<key<<"not found in array"<<endl;
    }
}

int main(){
    int arr[5]={55,66,33,77,44};
    findkey(arr,77);
    return 0;
}