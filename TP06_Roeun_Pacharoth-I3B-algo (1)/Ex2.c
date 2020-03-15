#include <stdio.h>
int main(){
    int i,n=1,p;
    while(n>0){
        printf("Enter number");
        scanf("%d",&n);
        p=0;
        for (i=2;i<n;i++){
            if(n%i==0){
                p=1;

            }
            
        }
        if(p==1){
            printf("%d is not primary number\n",n);
        }
        else
        {
            printf("%d is primary number\n",n);
        }
        
    }
}
