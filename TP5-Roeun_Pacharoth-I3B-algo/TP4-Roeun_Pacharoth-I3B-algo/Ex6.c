#include<stdio.h>
int main(){
    long count=1;
    for (long i = 1; i <= 20; i++)
    {
        count=count*i;
        /* code */
    }
    printf("The result of multiple is %ld",count);
}