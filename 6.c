#include <stdio.h>
#include<string.h>
#define MAX 10

int top=-1,count=0;

char stack[MAX];
char output[MAX];

void push(char s)
{
    if(top==MAX-1)
    {
        printf("STACK OVERFLOW \n");
        return;
    }
    
    top=top+1;
    stack[top]=s;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow \n");
        return;
    }
   
    
    output[count++]=stack[top--];
}

int main()
{
    char str[MAX];
    printf("Enter a string");
    gets(str);
    
    for(int i=0;i<strlen(str);i++)
    {
        push(str[i]);
    }
    for(int i=0;i<strlen(str);i++)
    {
        pop();
    }
    for(int i=0;i<strlen(str);i++)
    {
        printf("%c",output[i]);
    }
    return 0;
}