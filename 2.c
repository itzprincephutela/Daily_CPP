#include<stdio.h>
struct student{char a[50];
int x;
float y;
}s1;
int main()
{
    printf("%lu",sizeof(s1));
    return 0;
}
//a[50]=50 byte so 13 clock cycle will be there of 52 byte as max size is of 4 byte 
//thus 52+4+4=60