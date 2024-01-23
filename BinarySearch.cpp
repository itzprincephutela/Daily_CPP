#include <iostream>
using namespace std;

int binaryseacrh(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
       int  mid = (s + e) / 2;

        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if (arr[mid]<key)
        {
            s=mid + 1 ; 
        }
        else{
            return - 1 ;
        }
        
        
    }
}
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    int key;
    cout << "Enter the value of key : "<<endl;
    cin >> key;

    cout<<binaryseacrh(arr,n,key);
}