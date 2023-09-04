#include<stdio.h>
struct student{
    char name[50];
    int rollno;
    float marks;
}s;
int main (){
    printf("ENTER THE INFORMATION\n");
    printf("ENTER THE NAME :\n");
    fgets(s.name,sizeof(s.name), stdin);
    printf("ENTER ROLL NO : ");
    scanf("%d",&s.rollno);
    printf("ENTER THE MARKS : ");  
    scanf("%f,&s.marks");
    printf("DISPLAY INFORMATION");
    printf("NAME:%s",s.name);
    printf("MARKS:%.1f",s.marks);
    printf("ROLLNO:%d",s.rollno);
    return 0;
}
