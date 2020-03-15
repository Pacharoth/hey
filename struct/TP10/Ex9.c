#include <stdio.h>
typedef struct time{int h,mn,s;}time;
void displayTime(time s){
    int hr=s.h,min=s.mn,sec=s.s;

    printf("%dh:%dmn:%ds\n",hr,min,sec);
}
int converttoSec(time s){
    int total = (s.h*3600)+(s.mn*60)+s.s;
    return total;
}
void converttoTime(time s){
    int h=s.s/3600,min = s.s%3600/60,sec=s.s%3600%60;
    printf("%dh%dmn%ds\n",h,min,sec);
}
void differentTime(time s1,time s2){
    int h,min,sec;
    int h1=s1.h,min1=s1.mn,sec1=s1.s;
    int h2=s2.h,min2=s2.mn,sec2=s2.s;
    displayTime(s1);
    displayTime(s2);
    if(h1>h2){
        h = h1-h2;

    }else{
        h =abs( h2-h1);
    }if(min1>min2){
        min =abs(min1 -min2);
    }else{
      min = abs(min2 -min1);
    }if(sec1>sec2){
        sec = abs(sec1-sec2);
    }else{
        sec = abs(sec2-sec1);
    }
    printf("The time 1 and time 2 are %dh:%dmn:%ds different",h,min,sec);

}
int main(){
    time s,s1;
    int a,b;
    printf("First Test of a and d");
    printf("\n");
    printf("Enter hour1:");
    scanf("%d",&s.h);
    printf("Enter min1:");
    scanf("%d",&s.mn);
    printf("Enter sec1:");
    scanf("%d",&s.s);
    printf("Enter hour2:");
    scanf("%d",&s1.h);
    printf("Enter min2:");
     scanf("%d",&s1.mn);
    printf("Enter sec2:");
     scanf("%d",&s1.s);
     displayTime(s);
     displayTime(s1);
     differentTime(s,s1);
     printf("\n");
     a =converttoSec(s);
        printf("Second %d",a);

     printf("Enter second");
     scanf("%d",&s.s);
    converttoTime(s);

}


