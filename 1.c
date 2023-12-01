#include<stdio.h>
#include<stdlib.h>
int main() {
/*bitwise AND
A  B  A&B
0  0  0
0  1  0
1  0  0
1  1  1
*/
 int a=12; //1100
 int b=9;  //1001
           /*----*/
           //1000
  
  int c=a&b;
  printf("%d \n",c);

/*
bitwise OR
A  B  A|B
0  0  0
0  1  1
1  0  1
1  1  1

*/
// int a=12; //1100
// int b=9;  //1001
            /*----*/
           //1101
  
int d=a|b;
printf("%d\n",d);

/*
bitwise exclusive or

A   B   A^B
0   0   0
0   1   1
1   0   1
1   1   0
*/

// int a=12; //1100
// int b=9;  //1001
           /*----*/
            //0101
  
int e=a^b;
printf("%d\n",e);

/*
bitwise compliment
A  0
~A 1*/

int p=10;  //1010
int q=~p;  //0101

printf("%d",q);
}
//10 - 01010
//20 - 10100
