//
#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
struct Stack{
    int items[MAX_SIZE];
    int top;
};                                                                                               

void initialize(struct Stack *stack){
    stack->top=-1;
}

int isEmpty(struct Stack *stack){
    return (stack->top==-1);
}

int isFull(struct Stack *stack){
    return (stack->top == MAX_SIZE - 1);
}

void push(struct Stack *stack,int value) {
    if (isFull(stack)){
        printf("Stack Overflow\n");
    }
    else{
        stack->top++;
        stack->items[stack->top]=value;
        printf("Element %d pushed to the stack\n", value);
    }
}

int pop(struct Stack *stack  ) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
    }
    else{
        int popitem=stack->items[stack->top];
        stack->top--;
        //        return stack->items[stack->top+1];

        printf("Element %d popped from the stack\n", popitem);
        }
}

int peek(struct Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++)
        printf("%d ", stack->items[i]);
    printf("\n");
    }
}
void display(struct Stack *stack) {
    if(isEmpty(stack)){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++)
        printf("%d ", stack->items[i]);
    printf("\n");
    }
}

int main()
{
    struct Stack stack;
    initialize(&stack);
    push(&stack ,5 );
    push(&stack ,10 );
    push(&stack ,20);
    push(&stack ,30);
    display(&stack);
    //    push (&stack,6432789);//overflow
    printf("top element %d \n",peek(&stack));
    printf("pop element %d \n",pop(&stack));
    printf("top element after pop %d \n",peek(&stack));
    return 0;
       
}
