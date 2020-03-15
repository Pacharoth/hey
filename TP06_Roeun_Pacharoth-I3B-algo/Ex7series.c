#include <stdio.h>
int main(){
    int n,i,fabona,a=1,b=0;
    printf("Enter number positive:");
    scanf("%d",&n);
    printf("0 ");
    for (i=0;i<n;++i){
        fabona = b +a;
        a = b;
        b = fabona;
    printf("%d ",fabona);
    }
    
    
}