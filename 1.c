//struct can be declared by three ways
#include <stdio.h>

struct employee{
    int id;
    char name;
    float salary;
};//a,b,c; ----1 globally

//struct employee a; ----2 globally
int main() {

    struct employee m={3,'B',46.2}; //local to main function only ----3
    // m.id=12;
    // m.name='a';
    // m.salary=2.5;
    printf("Salary: %.2f\n",m.salary);

    return 0;
}