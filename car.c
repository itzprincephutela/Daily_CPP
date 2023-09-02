#include<stdio.h>
struct {
    char *engine ;
    char *fule_type ;
    int *fule_cap;
    int *seating_cap;
}car1,car2;
int main(){
    car1.engine ="DDL";
    car2.engine ="VLL";
    printf("%s\n",car1.engine);
     printf("%s",car2.engine);
     return 0;
}
