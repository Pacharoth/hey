#include <stdio.h>
int main(){
	int num=0,i ;
	printf("Enter the value: ");
	scanf("%d",&num);
	for (i = 0; i<=num;i++){
		num = num+i;
	}
	printf("The result of summation is %d",num);
}
