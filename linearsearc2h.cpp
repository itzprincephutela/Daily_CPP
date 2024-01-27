#include <iostream>
using namespace std;
int linearsearch(int arr[],int n,int key ){
    for(int i = 0 ; i < n ; i++){
        if (key == arr[i])
        {
            return i ;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the number of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    int key ;
    cout<<"Enter the Key:";
    cin>>key;
    cout<<linearsearch(arr,n,key)<<endl;
}