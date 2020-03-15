#include <stdio.h>
#include <string.h>
int main(){
	char mes[100];
	int s =1;
	char b[100];
	printf("Enter the message: ");
	gets(mes);
	strcpy(b,strrev(mes));
printf("%s",b);
	if(strcmp(mes,b)){
		s=0;
	}
	if(s==0){
		printf("It is paindrome");
	}else if( s==1){
		printf("It is not palindrome");
	}
}
