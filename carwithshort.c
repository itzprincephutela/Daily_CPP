#include<stdio.h>
struct car{
    char engine[50];
    char fule_type[10];
    int fule_tank;
    int seating_capacity;
    int city_milage;
};

int main (){
    struct car c1={"DDis90","Petrol",65,5,82};
    struct car c2={"DDis70","Petrol",85,8,7};
    printf("ALL ABOUT %s%s%d%i%i",c1);
  
}