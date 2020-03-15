#include <stdio.h>
int main(){
    int man[11];
    int max,max1;

    for(int i =1;i<=10;i++){
        printf("Enter number[%d]: ",i);

        scanf("%d",&man[i]);
    }max=max1=man[0];
    for(int i = 1;i<=10;i++){
        if(max>man[i]){
            max1=max;
            max = man[i];

        }else if(max1>man[i])
            if(man[i]!=max){
                max1=man[i];
            }
        }


    printf("\nThe second smallest minimum is %d",max1);
//    for(int i)
}

