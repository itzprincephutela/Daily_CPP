#include <stdio.h>
#define height 100
#define number 3.14
#define letter 'A'
#define letter_sequence "ABC"
#define backslash_char '\\' // bachslash is an escape sequence
int main()
{
    printf("Height is : %d \n",height);
    printf("Value of pi is : %.2f \n",number);
    printf("Letter is : %c \n",letter);
    printf("Sequence is : %s \n",letter_sequence);
    printf("Symbol is : %c \n",backslash_char);
    return 0;
}