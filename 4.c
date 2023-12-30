#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int x;
    int y;
}Point;

void initializePoint(Point* p,int x,int y){
    p = (Point*)malloc(sizeof(Point));
    p->x=x;
    p->y=y;
}

int main(){
    Point p;
    initializePoint(&p,5,10);
    printf("%d%d",p.x,p.y);
    free(p);
    return 0;
}