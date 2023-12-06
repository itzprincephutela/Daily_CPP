#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top =-1;

void push(int item){
    if (top ==MAX_SIZE-1){
        printf("Stack Overflow");
        return;
    }
    else{
        stack[++top]=item;
    }
}

int pop(){
    if (top == -1){
        printf("\n Stack Underflow\n ");
        return -1;
    }
    else{
        int item =stack[top];
        top--;
        return item;
    }
}
int is_operator(char symbol){
    if(symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/'){
        return 1;
    }
    return 0;
}
int evaluate(char * expression){
    int i=0;
    int symbol = expression[i];
    int op1,op2,result,answer;
    while (symbol !='\0'){
        if(symbol>='0' && symbol <= '9'){
            int num=symbol - '0';
            push(num);
        }
        else if(is_operator(symbol)){
            op2=pop();
            op1=pop();
            switch(symbol){
                case '+': result=op1+op2;
                break;
                case '-': result=op1-op2;
                break;
                case '*': result=op1*op2;
                break;
                case '/': result=op1/op2;
                break;
            }
            push(result);
        }
    i++;
       symbol = expression[i];
    

    }
    answer=pop();
    return answer;

}

int main(){
    char expression[]="5 6 7 + * 8 -";
    int result = evaluate(expression);
    printf("answer is : %d\n",result);
    return 0;

}