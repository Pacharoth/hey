#include <stdio.h>
#include<math.h>
int main(){
    float a=1,b=3,c=2;
    int p,q;
    float t,h,f;
    p = b*b-4*a*c;
    q = (a*a)+(b*b)-sqrt(a*a+b*b);
    t =pow(a,2.0/3.0)-1;
    h=pow(b,2)-(4*a*c);
    f = (sqrt(h)-b)/(float)(2*a);
    printf("When a=%d, b=%d, and c=%d each equation\nproduces result as follows:\ni. %d\nii. %d\niii. %.4f\niv. %f",(int)a,(int)b,(int)c,p,q,t,f);
}
