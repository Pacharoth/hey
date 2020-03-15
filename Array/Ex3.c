#include <stdio.h>
int main(){
    int man[11];
    int max,max1;

    for(int i =1;i<=10;i++){
        printf("Enter number[%d]: ",i);

        scanf("%d",&man[i]);
    }max=0;max1=0;
    for(int i = 1;i<=10;i++){
        if(max<man[i]){
            max = man[i];

        }
    }
    printf("largest maximum is %d",max);
    for(int i=0;i<=10;i++){
        if(max1<man[i]){
            if(man[i]<max){
                max1 =man[i];
            }
        }
    }
    printf("\nThe second largest  is %d",max1);
//    for(int i)
}
