#include <stdio.h>
int main(){
        int num,j,i,man[3][3],status=0,man1[3][3];
        printf("matrix1\n");
   for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter number[%d][%d]",i+1,j+1);
            scanf("%d",&man[i][j]);
        }
   }printf("matrix2\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter number[%d][%d]",i+1,j+1);
            scanf("%d",&man1[i][j]);
        }
   }

      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(man[i][j]!=man1[i][j]){
                status =1;
                break;

            }
        }

   }if(status ==0){
        printf("matrix1 and matrix2 are equal");
   }
   else if(status==1){
    printf("matrix1 and matrix2 are not equal");
   }



}
