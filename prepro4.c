#include <stdio.h>
#define hello 100
int main()
{
    #ifndef hi 
    {
        printf("Hi is not defined yet. But we will define it now\n");
        #define hi 300
    }
    #else
    {
        printf("Hello is already defined");
    }
    #endif
    return 0;
}