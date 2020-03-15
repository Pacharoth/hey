#include <stdio.h>
#include <math.h>
void pointEstimator(float a,float b[100]){
    int i=0;
    float bac=0;
    float ban = 0;
    for(i=0;i<a;i++){
        printf("Enter x[%d]:",(i+1));
        scanf("%f",&b[i]);
        
    }
    for ( i = 0; i <a; i++)
    {
        /* code */
        bac = bac +b[i];
    }
    ban =ban+ bac/a;
    
    printf("the result of u is %f",ban);

}
void standardEstimator(float a,float b[100]){
    int i=0;
    float bac=0,x=0;
    float ban = 0,man=0;
    float k=0,f=0,avg=0;
    // int i=0;
    // float bac=0;
    // float ban = 0;
    for(i=0;i<a;i++){
        printf("Enter x[%d]:",(i+1));
        scanf("%f",&b[i]);
        
    }
    for ( i = 0; i <a; i++)
    {
        /* code */
        bac = bac +pow(b[i],2);
    }
    for(i=0;i<a;i++){
        ban = ban +b[i];
    }
    
    k =k+ban/a;
    f = f +pow(k,2)*a;
    avg =avg+(bac-f)/(a-1);
    man=man+sqrt(avg);
    x=x +sqrt(avg/a);
    
    printf("the result of s is %f,sqrt of s %f\ndeviation x bar is %f",avg,man,x);
}
    