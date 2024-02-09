#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char name[10] = "Hit";
char *ptr = name;
printf("%c", *ptr+3);
return 0;
}
