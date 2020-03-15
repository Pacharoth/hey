#include<stdio.h>
#include<string.h>
#include"str.h"
int main() {
    char string1[100],string2[100],string[100];

    printf("Enter a string: ");
    scanf("%s",string);
    strcpy(string1,string);
    strupr(string1);
    strcpy(string2,string);
    strlwr(string2);
    printf("%s",string1);
    
    printf(",%s",string2);

    return 0;
}