#include<stdio.h>
int main() {
    const int RATE=4100;
    int dollar;
    printf("How much in US dollars do you want to exchange?: ");
    scanf("%d",&dollar);

    printf("Your exchange amount of %d USD\ndollars are equal to: %d riels \nwhen the exchange rate is 1 US dollar= %d riels\n",dollar,RATE*dollar,RATE);
    return 0;
}