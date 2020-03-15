#include <stdio.h>
#include <ctype.h>
#include<string.h>
#include"str.h"
int main(){
    char string1[100],string2[100];
    //I cannot use toupper or strupr so I
    printf("Enter a first string: ");
    scanf("%s",string1);
    printf("Enter a second string: ");
    scanf("%s",string2);

    strcpy(string1,string2);
    strupr(string1);
    printf("The first string: %s\n",string1 );
    printf("The second string: %s\n",string2);


}
