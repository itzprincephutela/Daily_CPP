#include<stdio.h>  
#include<stdlib.h>  
int compare(const void* num1, const void* num2) // comparing function  
{  
    int a = *(int*) num1;  
    int b = *(int*) num2;  
    if(a > b)  
    {  
        return 1;  
    }  
    else if(a < b)  
    {  
        return -1;  
    }  
    return 0;  
}  
int main()  
{  
    int arr[50], n, i;  
    printf("Enter the size of the array to be sorted: ");  
    scanf("%d", &n);  
    printf("\nEnter elements into the array: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    qsort(arr, n, sizeof(int), compare);  
    printf("\nThe sorted array: ");  
    printf("\n[");  
    for(i = 0; i < n; i++)  
    {  
        if(i == n-1) // To prevent a comma(,) after the last element  
        {  
            printf("%d", arr[i]);  
            break;  
        }  
        printf("%d, ", arr[i]);  
    }  
    printf("]");  
}  