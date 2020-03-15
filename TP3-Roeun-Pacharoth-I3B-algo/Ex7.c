#include<stdio.h>
int main() {
    float num,num1,num2;
    printf("Find the biggest number\n");
    printf("Please input first number: ");
    scanf("%f",&num);
    printf("Enter second number: ");
    scanf("%f",&num1);
    printf("Enter third number: ");
    scanf("%f",&num2);

    if (num>num1&&num>num2)
    {
        /* code */
        printf("The first number is the biggest.");
    }
    else if (num1>num&&num1>num2)
    {
        printf("The second number is the biggest.");
    }
    else if (num2>num1&&num2>num)
    {
        printf("The third number is the biggest");        
    }
    else if (num==num1 &&num>num2)
    {
        printf("The first and second numbers are the biggest");

    }
    else if (num==num2&&num>num1)
    {
        printf("The first and third numbers are the biggest");
    }
    else if (num1==num2 &&num1>num)
    {
        printf("The second and third numbers are the biggest.");
    }else{
        printf("They are equal.");
    }
    

    return 0;
}