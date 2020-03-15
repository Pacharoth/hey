#include <stdio.h>
int main(){
    int i,num,max=0;
    for(i=1;i<=20;i++){
        
        printf("Enter number ");
        scanf("%d",&num);
       
        if(max<num){
            max = num;

        }
    }
    printf("maximum num is %d",max);
}