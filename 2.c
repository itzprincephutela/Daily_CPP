//write program using inline funtion to calculate sum of Array
#include<stdio.h>  
static inline int sum(int arr[],int n)
{
    int s=0;
    for (int i=0;i<n;i++){
        s=s+arr[i];}
    return s;
}
int main()
{
    int n,s=0,ans;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    printf("Enter the element of the array: \n");
    scanf("%d",arr[i]); 
    }
    ans=sum(arr,n);
    printf("\nThe Sum is %d ",ans);


}