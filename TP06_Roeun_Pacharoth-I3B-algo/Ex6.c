#include <stdio.h>
int main(){
    int i=1,num,min;
    while(i<=20){
        printf("Enter number ");
        scanf("%d",&num);
       
        if(min>num){
            min = num;

        }
        i++;
    }
    printf("maximum num is %d",min);
}