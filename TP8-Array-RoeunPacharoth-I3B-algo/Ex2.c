#include <stdio.h>
int main(){
    int man[100],nani[100];
    int num,i;
    printf("Enter size of array:");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        printf("Enter number[%d]: ",i);
        scanf("%d",&nani[i]);
    }
    printf("Origin array:");
    for (i=1;i<=num;i++){
        man[i]=nani[i];
        printf("%d ",man[i]);
}printf("\nCopied array:");
    for(i=1;i<=num;i++){
        printf("%d ",man[i]);
    }
}
