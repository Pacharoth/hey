#include <stdio.h>
#include "estimator.h"
int main()
{

    float a, b[100];
    int c;
    printf("\n+ Mean estimator(1) standard deviation and x bar(2)+\n");
    
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        /* code */
        printf("Enter amount of x");
    scanf("%f",&a);

    pointEstimator(a,b);
        break;
    case 2: 
          printf("Enter amount of x");
    scanf("%f",&a);
        standardEstimator(a,b);
        break;
    default:
        break;
    }
    

}