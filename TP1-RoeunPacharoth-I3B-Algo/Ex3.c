#include <stdio.h>
#include <math.h>
int main(){
    //declare variable
    double Xa,Xb,Xc,Ya,Yb,Yc;
    double AB, AC,BC;
    double area,primeter,s,surface;

    //input
    printf("*****Calculate Primeter and Surface of Triangle****\n");
    printf("Point A\n");
    printf("Input coordinate x:");
    scanf("%lf",&Xa);
    printf("Input coordinate y:");
    scanf("%lf",&Ya);
    printf("Point B\n");
    printf("Input coordinate x:");
    scanf("%lf",&Xb);
    printf("Input coordinate y:");
    scanf("%lf",&Yb);
    printf("Point C\n");
    printf("Input coordinate x:");
    scanf("%lf",&Xc);
    printf("Input coordinate y:");
    scanf("%lf",&Yc);
    
    //processing 
    AB= sqrt(pow((Xb-Xa),2)+pow((Yb-Ya),2));
    AC = sqrt(pow((Xc-Xa),2)+pow((Yc-Ya),2));
    BC = sqrt(pow((Xc-Xb),2)+pow((Yc-Yb),2));
    primeter = AB + AC + BC;
    s = primeter/2;
    area = sqrt(s*(s-AB)*(s-AC)*(s-BC));

    //Output
    printf("AB = %lf AC=%lf BC=%lf\n",AB,AC,BC);
    printf("Half perimetter :%lf\n",s);
    printf("The result of perimeter : %lf and The result of surface : %lf\n",primeter,area);
    //run by command gcc Ex3.c -o Ex3 -lm and then ./Ex3
}
