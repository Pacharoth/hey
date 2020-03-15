#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "str.h"
int main() {
    char str[100];
    char s[20],s1[20];

    printf("Enter a string: ");
    scanf("%s", str);
    strcpy(s,str);
    strupr(s);
    

    printf("String is: %s",str);
    printf("\nUppercase is: %s",s);
    strcpy(s1,str);
    strlwr(s1);
    
    printf("\nLowercase is: %s",s1);

    return 0;
}