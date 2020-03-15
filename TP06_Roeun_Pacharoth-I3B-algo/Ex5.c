#include <stdio.h>
int main(){
    int i,j=0,num,sum =0,p=0,b;
	while(j==0){
    printf("Enter number:");
    scanf("%d",&num);
    sum=0;
    for(i=1;i<num;){
        b = num%i;
        if(b==0){
            sum =sum+i;
            i++;
        }else{
            i++;
        }
        }if(sum==num){
            printf("%d is perfect number\n",num);
        }
        else{
            printf("%d is not perfect number\n",num);
        }
		
     
        
    }    
    }
    
