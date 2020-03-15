#include <stdio.h>
#include<math.h>
int main() {
    float number;

    printf("Enter a number: ");
    scanf("%f",&number);

    printf("The square of %.2f is %.2f \nand the cube %.2f is %.3f",number,pow(number,2),number,pow(number,3));
    return 0;
}