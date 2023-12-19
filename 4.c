#include <stdio.h>
struct student{
    int roll;
    int marks;
    char a;
}s1;
int main()
{
    printf("%lu",sizeof(s1)); //empty bytes are known as padding 
    return 0;
}