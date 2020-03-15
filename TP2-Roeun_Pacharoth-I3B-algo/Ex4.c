#include <stdio.h>
#include <string.h>
int main() {
    char string[100],string1[100],string2[100];
    int str;
    char s,s1;

    printf("Enter a string: ");
    scanf("%s",string);

    str = strlen(string)-1;
    s =string[0];
    s1 = string[str];
    


    printf("In word \"%s\", the first character is '%c' and the last character is '%c' ",string,s,s1);

    return 0;
}