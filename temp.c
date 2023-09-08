// #include<stdio.h>
// int main (){
//     FILE *fptr ;
//     fptr=fopen("file.txt","r");
//     char ch;
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fclose(fptr);
// }
//#include<stdio.h>
// #include<stdlib.h>
// int main (){
//     FILE *fptr;
//     fptr=fopen("temp.txt","w");
//     char ch[100];
//     printf("Enter the chracter :");
//     fprintf(fptr,"%c",'a');
//     fprintf(fptr,"%c",'b');
//     fprintf(fptr,"%c",'c');
//     fprintf(fptr,"%c",'d');



//     fclose(fptr);

// }
// #include<stdlib.h>
// int main (){
//     FILE *fptr;
//     fptr=fopen("temp.txt","r");
//     printf("the number is %c",fgetc(fptr));
//     printf("the number is %c",fgetc(fptr));
//     printf("the number is %c",fgetc(fptr));
//     printf("the number is %c",fgetc(fptr));
//     printf("the number is %c",fgetc(fptr));
//     printf("the number is %c",fgetc(fptr));
//     printf("the number is %c",fgetc(fptr));
//     printf("the number is %c",fgetc(fptr));
//     printf("the number is %c",fgetc(fptr));
  


//     fclose(fptr);

// }
#include<stdio.h>
int main (){
    FILE *fptr;
    fptr=fopen("temp.txt","w");
    fputc('G',fptr);
    fclose(fptr);
}