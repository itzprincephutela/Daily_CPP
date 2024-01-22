//postfix 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int stack[MAX];
int top=-1;
char output[MAX];
int count=-1;

void push(int value){
    if(count==MAX-1){
        printf("Stack Overflow\n");
    }
    else{
        output[++count]=value;
    }
}

void push2(int value){
    if(top==MAX-1){
        printf("Stack Overflow\n");
    }
    else{
        stack[++top]=value;
    }
}

int pop(){
    if(top == MAX-1){
        printf("Stack Underflow");
    }
    else{
        return stack[top--];
    }

}

int isoperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return 1;
    }
    return 0;
}

int evaluate(char *output){
    int i=0,answer;
    int symbol=output[i];
    while(symbol!='\0'){
        if(symbol>='0' && symbol<='9'){
            int num = symbol-'0';
            push2(num);
        }
        else if(isoperator(symbol)){
            int op1,op2,result;
            op2=pop();
            op1=pop();
            switch (symbol) {
                case '+': result=op1+op2;
                break;
                case '-': result=op1-op2;
                break;
                case '*': result=op1*op2;
                break;
                case '/': result=op1/op2;
                break;
        }
        push2(result);
    }
    i++;
    symbol = output[i];
    }

    answer=pop();
    return answer;
}

int main(){
    int result;
    char exp[MAX];
    printf("Enter the expression\n");
    gets(exp);
    for(int i=0;i<strlen(exp);i++){
        push(exp[i]);
    }
    result=evaluate(output);
    printf("%d",result);
    return 0;
}