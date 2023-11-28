#include<stdio.h>
int main()
{
    printf("Name of file you are working in: %s \n",__FILE__);
    printf("Current date is: %s \n",__DATE__);
    printf("Current time is: %s \n",__TIME__);
    printf("Current number is: %d \n",__LINE__);
    printf("ANSI followed or not: %d \n",__STDC__);
    return 0;
}