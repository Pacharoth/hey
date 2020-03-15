#include <stdio.h>
int main(){
	//variable declaration
	int n1,n2,n3,n4,n5,n6,n7;

	//Getting input
	printf("**Enter seven numbers sepearated by space**\n");
	scanf("%d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7);

	//process
	int min;
	min = n1;
	if(min>n2){
		min=n2;
	}
	if(min>n3){
		min = n3;
	}
	if(min>n4){
		min= n4;
	}
	if(min>n5){
		min = n5;
	}
	if(min>n6){
		min = n6;
	}
	if(min>n7){
		min = n7;
	}
	

	//Output
	printf("%d is minimum of all 7 numbers",min);
}
