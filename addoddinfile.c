#include<stdio.h>
int main (){
    FILE *fptr;
    fptr=fopen("odd.txt","w");
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    for(int i =1; i<=n ; i++)
{
    if(i%2!=0){
        printf("%d",i);
        fprintf(fptr,"%d\n",i);
    }
}
fclose(fptr);
    
}