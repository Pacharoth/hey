#include <stdio.h>
#include <math.h>
int main(){
    int amount1,amount2;
    int price1,price2,price0,price,price01;
    char product1[100],product2[100];
    
    printf("Enter the name of the first product: ");
    scanf("%[^\n]s",product1);
    printf("Enter the price per unit ($) : ");
    scanf("%d",&price1);
    printf("Enter the amount of the product : ");
    scanf("%d",&amount1);

    printf("\n\t***************\n");
    printf("Enter the name of second product : ");
    scanf("\t%[^\n]s",product2);
    printf("Enter the price per unit ($) : ");
    scanf("%d",&price2);
    printf("Enter the amount of the product : ");
    scanf("%d",&amount2);


    price0=price1*amount1;
    price01=price2*amount2;
    price = price0+price01;


    printf("No\tProducts\tPrice per unit ($)\tAmount\tPrice\n");
    printf(" 1\t  %s\t\t\t%d\t\t  %d\t %d\n",product1,price1,amount1,price0);
    printf(" 2\t  %s\t\t\t%d\t\t  %d\t %d\n",product2,price2,amount2,price01);
    printf("\t\t\t\t\t\ttotal:\t %d\n",price);

    

    
}
