#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
	float n,i,p=0;
	printf("Enter your number");
	scanf("%f",&n);
	for( i =1;i<=n-1;i++){
		printf("%.f^3+",i);
	}

	while(n>=1){
		p = pow(n,3)+p;
	n--;
	}
	printf("%.f^3",n);

	printf("=%.f",p);
}

