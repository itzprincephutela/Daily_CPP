#include<stdio.h>
#include<string.h>

int main()
{
    FILE* fptr;
    fptr=fopen("priya.txt","w");
    if(fptr!=NULL){
        printf("File opened successfully");
    }
    else{
        printf("\n File not found\n");
    }
    char a[50];
    printf("\nEnter a string");
    gets(a);
    for(int i=0;i<=strlen(a);i++)
    {
        fputc(a[i],fptr);
        //fprintf(fptr,"%c",a[i]);
    }
    fclose(fptr);
    return 0;
}