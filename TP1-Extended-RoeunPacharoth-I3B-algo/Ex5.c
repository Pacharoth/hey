#include <stdio.h>
#include<stdbool.h>
int main(){
    float num1,num2;
    int result;
    float ban;
    char n = '%';

    printf("Enter a first number: ");
    scanf("%f",&num1);
    printf("Enter a second number: ");
    scanf("%f",&num2);
    result=(int)num1%(int)num2;
    ban = num1/num2;
    printf("Summation: %.3f + %.3f =%.3f\n",num1,num2,num1+num2);
    printf("Subtraction: %.3f - %.3f=%.3f\n",num1,num2,num1-num2);
    
    if(num2!=0){
        ban = num1/num2;
        printf("Divsion: %.3f / %.3f =%.2f\n",num1,num2,ban);

    }
    else{
        printf("change value second num");
    }
    printf("Multiplication: %.3f * %.3f =%.2f\n",num1,num2,num1*num2);
    printf("Modulus: %.3f %c %.3f =%d\n",num1,n,num2,result);    
    

}