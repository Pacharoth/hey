#include<stdio.h>
int main(){
    char surname[100],name[100];
    printf("Please enter your surnname: ");
    scanf("%s",surname); //%[^\n]s
    printf("Please enter your name: ");
    scanf("%s",name);
    printf("Welcome to GIC %s %s\n",surname,name);
}