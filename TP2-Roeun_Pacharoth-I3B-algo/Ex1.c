#include<stdio.h>
#include<string.h>
int main(){
    char student[100],course[100];
    char con[100];
    printf("Input student name: ");
    scanf("%s",student);
    printf("Input course name:");
    scanf("%s",course);
    strcat(con,"Welcome ");
    strcat(con,student);
    strcat(con," to the course ");
    strcat(con,course);
    printf("%s.",con);
}