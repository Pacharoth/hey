#include <stdio.h>
int main(){
    int h, mn,s,r;

    printf("Enter time in second : ");
    scanf("%d",&s);

    h = s/3600;
    mn = (s%3600)/60;
    r = (s%3600)%60;

    printf("It is : %dh %dmn %ds\n",h,mn,r);

    
}