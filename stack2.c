//balanced bracketts
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char item){
    if(top == MAX_SIZE-1){
        printf("Stack Overflow");
    }
    else{
        stack[++top] =item ;
    }
}

int pop(){
    if(top == MAX_SIZE-1){
        printf("Stack Underflow");
    }
    else{
        return stack[top--];
    }

}
int main(){
    char str[MAX_SIZE];
    printf("Enter a string: \n");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
    if (str[i]=='(' || str[i]=='{' ||str[i]=='['){
        push(str[i]);
    }
    else if(str[i]==')' || str[i]=='}' ||str[i]==']'){
        if(top == -1){
        printf("unbalanced brackets");
        return 0;
        }
        char brac=pop();
        if(str[i]==')' && brac!='('|| str[i]=='}' && brac!='{'||str[i]==']'&& brac!='['){
            printf("Unbalanced Brackets");
            return 0;
        }
    }
    }  
    if(top==-1){
        printf("Balanced Brackets");
    }
    else{
        printf("unBalanced Bracket");
    }
    return 0;
}