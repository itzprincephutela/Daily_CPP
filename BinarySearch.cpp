// #include <iostream>
// using namespace std;

// int binaryseacrh(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n;
//     while (s <= e)
//     {
//        int  mid = (s + e) / 2;

//         if (arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else if (arr[mid]<key)
//         {
//             s=mid + 1 ; 
//         }
//         else{
//             return - 1 ;
//         }
        
        
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i] ;
//     }
//     int key;
//     cout << "Enter the value of key : "<<endl;
//     cin >> key;

//     cout<<binaryseacrh(arr,n,key);
// }


// Bubble Sort
// using only in acceding order or desending order
#include<iostream>
using namespace std;
int binarySeacrh(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        // right side greater then mid yaa to fir go to right vala part
        if (key>arr[mid]){
            start=mid+1;
        }
        else{
        end=mid-1;
        }
        mid=(start+end)/2;
    }
}


int  main (){
    int even[6]={1,2,4,5,7,8};
    int odd[5]={1,2,3,4,5};
    int index= binarySeacrh(even,6,5);
    cout<<"Index Of 5 is:"<<index<<endl;
    int iindex= binarySeacrh(odd,5,5);
    cout<<"Index Of 5 is:"<<iindex;

    
}