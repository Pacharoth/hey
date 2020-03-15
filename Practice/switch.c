#include <stdio.h>
int main(){
	int s;
	float a,b;
	printf("Enter 1 plus 2 minus 3 division 4 multiply:");
	scanf("%d",&s);
	printf("Enter 2 number by separated space:");
	scanf("%f %f",&a,&b);
	
	switch(s){
		case 1:
			printf("%.2f +%.2f =%.2f",a,b,a+b);
			break;
		case 2:
			printf("%.2f -%.2f =%.2f",a,b,a-b);
                        break;
		case 3:
                        printf("%.2f /%.2f =%.2f",a,b,a/b);
                        break;
		case 4:
                        printf("%.2f *%.2f =%.2f",a,b,a*b);
                        break;
	}	
}
