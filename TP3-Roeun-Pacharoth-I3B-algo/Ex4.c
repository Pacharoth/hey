#include<stdio.h>
int main() {
    int paper;
    float total,total1,total2;
    printf("Enter number of paper: ");
    scanf("%d",&paper);

    if(paper>=0&&paper<=30){
        printf("The total price of photocopies %d is %.3f$.",paper,total=paper*0.05);
    }else if(paper>30&&paper<=100){
        printf("The total price of photocopies %d is %.3f$.",paper,total1=paper*0.025);        
    }
    else if(paper>100){
        printf("The total price of photocopies %d is %.3f$",paper,total2=paper*0.01);
    }
    return 0;
}