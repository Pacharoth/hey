#include <stdio.h>
int main() {
    int price;
    float pricewithtax;
    const float TAX = 0.03;

    printf("Enter a price: ");
    scanf("%d",&price);
    pricewithtax = (price*TAX)+price;
    printf("Price without tax is %d USD dollars\nand price including tax is %.2f USD dollar\n",price,pricewithtax);
    return 0;
}
