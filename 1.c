//circuler queue
#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

struct circularqueue{
    int items[MAX_SIZE];
    int front; //front of the queue
    int rear;
};

bool isEmpty(struct circularqueue * q){return (q->front == -1 && q->rear==-1);}

bool isFull(struct circularqueue * q){return (q->rear+1)%MAX_SIZE==q->front;}
void enqueue( struct circularqueue* q, int value) {
    if(isFull(q)){
        printf("Queue is full . . .  cant enter value");
        return;
    }
    if(isEmpty(q)){
        q->front=0;
        q->rear=0;
    }
    else{
        q->rear=(q->rear+1)%MAX_SIZE; //if its not empty or full and the element will be added at the deleted place
    }
    q->items[q->rear]=value;
}
int dequeue(struct circularqueue *q){
    int value;
    if(isEmpty(q)){
        printf("Queue is empty . . . cant delete");
        return -1;
    }
    value=q->items[q->front];
    if(q->front==q->rear){
        q->front =-1;q->rear=-1;
    }
    else{
        q->front=(q->front+1)%MAX_SIZE;
    }
    return value;
}

int main(){
    struct circularqueue q;
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    printf("delete value: %d",dequeue(&q));
    printf("delete value: %d",dequeue(&q));
    enqueue(&q,5);
    enqueue(&q,6);

    return 0;
}