#include<stdio.h>
int main(){
    int num,i,man[100];
    printf("Enter size of number:");
    scanf("%d",&num);
    for(i = 1;i<=num;i++){
        printf("Enter number[%d]: ",i);
        scanf("%d",&man[i]);
    }
    printf("The reverse number ");
    for(i =num;i >=1;i--){
        printf("%d ",man[i]);
    }
}
