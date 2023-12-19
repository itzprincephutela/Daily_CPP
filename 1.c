#include <stdio.h>
#include <string.h>

struct dob{
    int date;
    char month[20];
    int year;
};

struct student {
    int roll;
    char name[20];
    int marks;
    struct dob d1;
};
int main(){
    struct student s1;
    printf("Enter the name of student \n");
    scanf("%s",s1.name);
    printf("Enter the roll number of student \n");
    scanf("%d",&s1.roll);
    printf("Enter the marks of student \n");
    scanf("%d",&s1.marks);
    printf("Enter DOB of %s\n",s1.name);
    scanf("%d%s%d",&s1.d1.date,s1.d1.month,&s1.d1.year);
    printf("the id of %s is %d\n",s1.name,s1.roll);
    printf("the marks of %s is %d\n",s1.name,s1.marks);
    printf("Date of birth is: %d-%s-%d",s1.d1.date,s1.d1.month,s1.d1.year);
    return 0;
}