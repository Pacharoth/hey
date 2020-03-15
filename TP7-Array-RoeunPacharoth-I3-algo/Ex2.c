#include<stdio.h>
int main(){
    int i,score[20];
    int sum=0;
    int average;
    for(i=1;i<=20;i++){
        printf("Enter your score[%d] :",i);
        scanf("%d",&score[i]);
        sum = sum + score[i];

    }
    printf("%d\n",sum);

    average =sum /20;

    printf("Average of score is %d\n",average);
    for(i=1;i<=20;i++){
        if(score[i]>average){
            printf("Score[%d] greater than average are %d \n",i,score[i]);
        }
    }
}
