#include <stdio.h>
#include <math.h>
int main(){
    int p=0, n,i;

    printf("Enter number:");
    scanf("%d",&n);
    for (i =n; i >=2;i--){
        printf("%d^3+",i);
    }
    while(n>=1){
        p=p+pow(n,3);
        n--;
    }
    printf("1^3=");
    printf("%d",p);

}