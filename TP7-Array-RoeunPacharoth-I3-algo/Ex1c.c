#include<stdio.h>
int main(){
    int i,num[100];
    printf("Number 2-100 even: ");
    for(i=0;i<=100;i+=2){
        num[i]=i;
        if(num[i]==0){
            continue;
        }
        printf("%d ",num[i]);
    }
}
