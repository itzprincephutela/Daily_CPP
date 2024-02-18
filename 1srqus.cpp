// normal binarySearch
// #include<iostream>
// using namespace std;
// int binarySeacrh(int arr[],int size ,int key){
//     int start =0;
//     int end=size-1;
//     int mid = (start + end)/2;
//     while(start<=end){
//         if(arr[mid]==key)
//         return mid;

//     if(key>arr[mid]){
//         start=mid+1;
//     }
//     else{
//         end=mid-1;
//     }
//     mid=start+end/2;
// }
// }
// int main (){
//     int even[6]={1,2,3,4,5,6};
//        int odd[5]={1,2,3,4,5};
//        int indexeven=binarySeacrh(even,6,6);
//        int indexodd=binarySeacrh(odd,5,5);
//        cout<<"Index of Even :" <<indexeven<<endl;
//        cout<<"Index of Odd : "<< indexodd;

// }

// FIRST AND LAST OCCURANCE WITH BINARYSORT
//  #include<iostream>
//  using namespace std;
//  int Firstocc(int arr[],int size,int key){
//      int start =0 ;
//      int end = size-1;
//      int mid = start + (end-size)/2;
//      int ans =-1;
//      while(start<=end){
//          if(arr[mid]==key){
//          ans = mid;
//          end =mid-1;
//      }
//       if(mid<key){
//          start=mid+1;
//       }
//       else{
//          end=mid-1;
//       }
//       mid=start+(end-size)/2;
//  }
//  return ans;
//  }
//  int Lastocc(int arr[],int size,int key){
//      int start =0 ;
//      int end = size-1;
//      int mid = start + (end-size)/2;
//      int ans =-1;
//      while(start<=end){
//          if(arr[mid]==key){
//          ans = mid;
//          start =mid+1;
//      }
//       else if(arr[mid]<key){
//          start=mid+1;
//       }
//       else{
//          end=mid-1;
//       }
//       mid=start+(end-size)/2;
//  }
//  return ans;
//  }
//  int main(){
 
    //  int even[5]={1,2,3,3,5};
    //  cout<<"first occ of even 2 is : "<<Firstocc(even,5,3)<<endl;
    //  cout<<"first occ of even 2 is : "<<Lastocc(even,5,3);

//  }
// Total Number Of Ouccerence with Binary SEARCH
#include <iostream>
using namespace std;
int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
         mid = start + (end - start) / 2;
    }
    return ans;
}
int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int even[6] = {1, 2, 2, 2, 2, 2};
    int firstnum = firstocc(even, 6, 2);
    int lastnum = lastocc(even, 6, 2);
    cout << "first occ of even 2 is : " << firstnum << endl;
    cout << "first occ of even 2 is : " << lastnum << endl;
    int total = lastnum - firstnum + 1;
    cout << "TOTAL 2 in ARRAY IS : "<<total<<endl;
    return 0;
}