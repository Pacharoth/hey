#include<stdio.h>
#include<math.h>
void calcul(float a,float b, float c){
   
    int p,q;
    float t,h,f;
    p = b*b-4*a*c;
    q = (a*a)+(b*b)-sqrt(a*a+b*b);
    t =pow(a,2.0/3.0)-1;
    h=pow(b,2.0)-(4.0*a*c);
    f = (sqrt(h)-b)/(float)(2*a);
printf("\nWhen a=%d, b=%d, and c=%d each equation\nproduces result as follows:\ni. %d\nii. %d\niii. %.4f\niv. %f",(int)a,(int)b,(int)c,p,q,t,f);
}
int main(){
	float a=3.0,b=4.0,c=1,a1=1,b1=3,c2=2;
	calcul(a,b,c);
	calcul(a1,b1,c2);	
}
