#include<stdio.h>
#include<string.h>
int main (){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[10];

    }pokemon;
    pokemon pikachu;
    pokemon chizad;
    pokemon array[3];
    array[0].attack=56;
    array[0].hp=500;
    array[0].speed=100;
    array[0].tier='A';
    strcpy(array[0].name,"prince");

    array[1].attack=76;
    array[1].hp=700;
    array[1].speed=170;
    array[1].tier='L';

    array[2].attack=56;
    array[2].hp=500;
    array[2].speed=100;
    array[2].tier='k';

    for(int i=0;i<3;i++){
        printf("%d\n",array[i].attack);
        printf("%c\n",array[i].tier);
        printf("%d\n",array[i].hp);
        printf("%d\n",array[i].speed);
        
    }
    
    
    
}
