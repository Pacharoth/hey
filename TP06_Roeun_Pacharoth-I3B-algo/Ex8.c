#include <stdio.h>

int main()
{
    int i=1, man ,sum=0;
   
    while(i>=0){ 
    printf("Enter number");
    scanf("%d",&man);
    if(man==0){
        break;
    }
    sum=sum+man;
}
    printf("Summation is %d",sum);

    return 0;
}
