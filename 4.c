#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    int n;
    printf("What do you want to do?\n");
    printf("1.create\n");
    printf("2.open\n");
    printf("3.append\n");
    printf("4.save\n");
    scanf("%d",&n);
    getchar();
    switch(n)
    {
    case 1:{
        char c;
        FILE *fptr;
        char s[20];
        printf("Name of the file: \n");
        scanf("%s",s);
        fptr=fopen(s,"w");
        if(fptr!=NULL){
            printf("File created successfully\n");
        }
        else{
            printf("Already exist\n");
        }
        // printf("Do you want to add text: \n");
        // printf("y/Y for yes and anything else for no.\n");
        // scanf("%s",c);
        // if(c=='y'||c=='Y'){
        char a[40];
        printf("\nEnter a string");
        gets(a);
        for(int i=0;i<=strlen(a);i++){
        fputc(a[i],fptr);
        //fprintf(fptr,"%c",a[i]);
        }
        fclose(fptr);
        // }
        // else{
        //     fclose(fptr);
        // }
        }break;
        
        case  2:{
            FILE *fptr;
            char s[20];
            printf("Name of the file: \n");
            scanf("%s",s);
            fptr=fopen(s,"r");
            if(fptr!=NULL){
                printf("File opened successfully");
            }
            else{
                printf("\n File not found\n");
            }
        }break;
        
        case 3:{
            FILE *fptr;
            char s[20];
            printf("Name of the file: \n");
            scanf("%s",s);
            fptr=fopen(s,"a");
            if(fptr!=NULL){
                printf("File opened successfully");
                }
            else{
                printf("\n File not found\n");
            }
            char a[50];
            printf("\nEnter a string");
            gets(a);
            for(int i=0;i<=strlen(a);i++){
                fputc(a[i],fptr);
                //fprintf(fptr,"%c",a[i]);
            }
            fclose(fptr);
        }break;

        case 4:{
            FILE *fptr;
            char s[20];
            printf("Name of the file: \n");
            scanf("%s",s);
            fptr=fopen(s,"a");
            if(fptr!=NULL){
                fclose(fptr);
                printf("File saved successfully");
                }
            else{
                printf("\n File not found\n");
            }
        }break;

    }
    

    return 0;
}