#include <stdio.h>
int main(){
	int a, factorial =1,i;
	printf("Enter number :");
	scanf("%d",&a);

	for (i =1;i<=a;i++){
		
		factorial = factorial*i;
	}
	if(a>=0){
	printf("The factorial of %d is %d",a,factorial);
	}else{
		printf("Invalid");}
}
