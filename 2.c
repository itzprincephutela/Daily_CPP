#include<stdio.h>
int main() {
    int n;
    int m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0 ;i < n;i++){
        for (int j = 0;j< m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    for(int i=0 ;i < n;i++){
        for (int j = 0;j< m;j++){
            if(max<=arr[i][j]){
                max=arr[i][j];
            }
        }
        printf("Maximum element in each row: %d\n",max);
    }

}