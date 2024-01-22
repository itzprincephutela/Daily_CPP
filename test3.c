#include<stdio.h>
#include<string.h>
int main() {
    int j=0;
    char str[100];
    char output[100];
    printf("Enter a string: ");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if (str[i]>='a'&& str[i]<='z' ||str[i]>='A'&& str[i]<='Z'){
            output[j]=str[i];
            j++;
        }
    }
    printf("%s",output);
    return 0;
}