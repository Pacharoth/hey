#include <stdio.h>
#include <math.h>
int main(){

	float a,b,c;
	float deta,x1,x2;
	printf("Enter 3 values of a,b and c:");
	scanf("%f %f %f",&a,&b,&c);
	deta = pow(b,2) -4*a*c;
	if(deta>0){
		x1 = -b/(2*a)-sqrt(deta)/(2*a);
		x2 = -b/(2*a)+sqrt(deta)/(2*a);
		printf("x1 = %f x2 =%f",x1,x2);
	
	}else if(deta<0){
		printf("There is no root");
	}else if (deta==0){
		x1=x2;
		x1= -b/2*a;
		printf("x1=x2= %f",x1);
	}

}
