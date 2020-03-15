#include <stdio.h>
int main(){
    int i,num=3,s=0;
    while (num<=500){
        s =0;
        for(i=2; i<num;i++){
            if(num%i==0){
                s =1;
            }
           
            
        } 
        if (s==0)
            {
                /* code */
                printf("%d ",num);
            }
            num++;
    }
}