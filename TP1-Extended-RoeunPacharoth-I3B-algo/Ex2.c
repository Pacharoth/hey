#include <stdio.h>
int main() {
    char name[100],department[100];
    int year;
    
    printf("Enter your name:");
    scanf("%[^\n]s",name);
    printf("Which department are you from?: ");
    scanf("\t%[^\n]s",department);
    printf("Which year were you born?: ");
    scanf("%d",&year);

    printf("Hello %s ! Welcome to %s.\nYou are %d years old\n",name,department,2019-year);

    return 0;
}