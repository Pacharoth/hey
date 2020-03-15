#include<stdio.h>
int main(){
   int num,i,man[100];
   int arr[100],arr1[100];
    printf("Enter size of number:");
    scanf("%d",&num);

    for(i = 1;i<=num;i++){
        printf("Enter number[%d]: ",i);
        scanf("%d",&man[i]);
    }

    for(i =1;i<=num;i++){
            if(man[i]%2==0){
                arr[i]=man[i];
            }
            else if(man[i]%2==1){
                arr1[i]=man[i];
            }
    }printf("array of even number = ");
        for(i =1;i<=num;i++){

            if(man[i]%2==0){
                printf(" %d",arr[i]);
            }
            }
printf("\narray of odd number = ");
          for(i =1;i<=num;i++){

            if(man[i]%2==1){
                printf(" %d",arr1[i]);
            }
            }
}
