#include <stdio.h>
int main(){
    int n,i,fabona,a=1,b=0;
    printf("Enter number:");
    scanf("%d",&n);
    for (i=0;i<n;++i){
        fabona = b +a;
        a = b;
        b = fabona;
    
    }printf("fabonacci of %d is %d",n,fabona);
    
    
}
