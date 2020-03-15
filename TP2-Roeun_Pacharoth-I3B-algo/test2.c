#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]="Dara";
    char name2[20];

    strcpy(name2,name);
    printf("Hi %s %s!",name,name2);
    printf("\n\n\n");

    strcat(name2,"Hi!");
    printf("Hello %s",name2);

    

    return 0;
}
