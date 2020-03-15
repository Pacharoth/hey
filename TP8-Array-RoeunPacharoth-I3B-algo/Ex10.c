#include <stdio.h>
int main(){
        int num,j,i,man[3][3],status=0,man1[3][3];
        printf("matrix\n");
   for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter number[%d][%d]",i+1,j+1);
            scanf("%d",&man[i][j]);
        }
   }for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          if(i==j){
            if(man[i][j]!=1){
                status=1;
                break;
            }
          }else{
                if(man[i][j]!=0){
                    status=1;
                    break;
                }
          }
        }
   }
   if(status==1){
        printf("It is not an identity matrix");
   }
   else if (status ==0){
    printf("It is an identity matrix");
   }






}
