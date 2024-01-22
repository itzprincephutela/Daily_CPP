//reverse the string using stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top =-1;
char output[MAX_SIZE];
int count=-1;


void push(int value){
    if(top==MAX_SIZE-1){
        printf("Stack Overflow");
    }
    else{
        stack[++top]=value;
    }
}

void pop(){
    if (top == -1) {
        printf("\n Stack Underflow\n ");
    }
    else{
        output[++count]=stack[top--];
    }
}
int main(){
    char str[MAX_SIZE];
    printf("Enter a string");
    gets(str);

    for(int i=0;i<strlen(str);i++){
        push(str[i]);
    } 
    for(int i=0;i<strlen(str);i++){
        pop(str[i]);
    }
        printf("%s",output);
    return 0;
}
