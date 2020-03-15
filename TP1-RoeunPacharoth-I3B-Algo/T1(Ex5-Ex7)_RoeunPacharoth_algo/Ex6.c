#include <stdio.h>
int main(){
    int hour,min,sec,total;

    printf("Convert from hr min sec to sec\n");
    printf("Enter hour : ");
    scanf("%d",&hour);
    printf("Enter minute : ");
    scanf("%d",&min);
    printf("Enter second : ");
    scanf("%d",&sec);

    total = (hour*3600)+(min*60)+sec;

    printf("It is %d seconds\n",total);
}