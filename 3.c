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
    struct dob d1[n];
};
int main(){
    int n;
    struct student s1[n];
    printf("Enter the limit of loop\n");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
    printf("\nEnter the name of student \n");
    scanf("%s",s1[i].name);
    printf("Enter the roll number of student \n");
    scanf("%d",&s1[i].roll);
    printf("Enter the marks of student \n");
    scanf("%d",&s1[i].marks);
    printf("Enter DOB of %s\n",s1[i].name);
    scanf("%d%s%d",&s1[i].d1[i].date,s1[i].d1[i].month,&s1[i].d1[i].year);
    printf("the id of %s is %d\n",s1[i].name,s1[i].roll);
    printf("the marks of %s is %d\n",s1[i].name,s1[i].marks);
    printf("Date of birth is: %d-%s-%d",s1[i].d1[i].date,s1[i].d1[i].month,s1[i].d1[i].year);
    }
    return 0;
}
