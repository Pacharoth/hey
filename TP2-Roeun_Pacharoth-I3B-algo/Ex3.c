#include<stdio.h>
#include<string.h>
int main() {
    char string[100];
    int str;

    printf("Enter a string: ");
    scanf("%s",string);

    str = strlen(string);

    printf("The length of the word \"%s\" is %d",string,str);
    return 0;
}