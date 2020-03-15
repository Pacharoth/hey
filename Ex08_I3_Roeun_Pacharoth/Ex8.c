#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int age,year_of_birth;
    const int year =2019;

    printf("Enter your name: ");
    gets(name);
    printf("Enter your year of birth: ");
    scanf("%d",&year_of_birth);

    age = year - year_of_birth;

    printf("Hello, %s !This year are %d year old.\nYour name has %d characters long.",name,age,strlen(name));
}
