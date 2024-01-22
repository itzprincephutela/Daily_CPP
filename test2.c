#include<stdio.h>
#include<string.h>
int main() {
    int f;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char a;
    printf("Enter a character to find its frequency: ");
    scanf("%c",&a);
    for(int i=0;i<strlen(str);i++){
        if (a==str[i]){
            f++;
        }
    }
    printf("Frequency of %c = %d",a,f);
    return 0;
}