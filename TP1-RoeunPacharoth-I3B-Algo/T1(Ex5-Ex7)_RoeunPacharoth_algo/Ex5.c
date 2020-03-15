#include <stdio.h>
int main(){
    float scorem,scorein,average,total;
    float cof1,cof2;

    printf("Enter the score of mathematics : ");
    scanf("%f",&scorem);
    printf("Enter the coefficient : ");
    scanf("%f",&cof1);
    printf("Enter the score of informatic : ");
    scanf("%f",&scorein);
    printf("Enter the coefficient : ");
    scanf("%f",&cof2);

    total = (scorem*cof1)+(scorein*cof2);
    average = total / (cof1+cof2);

    printf("The total score is : %.3f\n",total);
    printf("The total coefficient is : %.3f\n",cof1+cof2);
    printf("The average is %.4f\n",average);
}
