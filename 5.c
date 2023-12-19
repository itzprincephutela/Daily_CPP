#include <stdio.h>
struct student{
    int roll:2;
    int marks:2;
    char a;
}s1;
int main()
{
    printf("%lu",sizeof(s1)); //empty bytes are known as padding 
    return 0;
}