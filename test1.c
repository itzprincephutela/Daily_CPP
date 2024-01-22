#include<stdio.h>
int main() {
    int n,a,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i < n;i++){
        scanf("%d",&a);
        arr[i]=a;
    }
    for(int i=0 ;i < n;i++){
        if(arr[i]==(n-1)){
            j++;
        }  
    }
    printf("%d",j);
    return 0;
} 
