#include <stdio.h>
int main(){
	int n , i=1 , max;
	printf("Enter number:");
	scanf("%d",&n);
	max = n;
	while(i<20){
	printf("Enter number:");
	scanf("%d",&n);

		if(max<n){
			max= n;
		}
	i++;

	}
	printf("%d",max);

}

