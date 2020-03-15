#include <stdio.h>
int main(){
	int a, factorial =0,i;
        printf("Enter number :");
        scanf("%d",&a);

        for (i =1;i<=a;i++){
                factorial = factorial+i;
        }
        printf("The summation is %d",factorial);
}