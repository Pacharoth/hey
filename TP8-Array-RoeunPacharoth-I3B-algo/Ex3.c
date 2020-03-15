#include <stdio.h>

int main()
{
    int arr[100], man[100];
    int num, i, j, cte;

       printf("Enter size of array");
       scanf("%d",&num);


       for(i=0;i<num;i++){
       printf("Enter number[%d] : ",i+1);
       scanf("%d",&arr[i]);
    man[i] = 1;
     }
    for(i=0; i<num; i++){
        cte = 1;
        for(j=i+1; j<num; j++){
            if(arr[i]==arr[j]){
                cte++;
                man[j] = 0;
            }
        }

        if(man[i]!=0){

            man[i] = cte;}
    }

    for(i=0; i<num; i++){
        if(man[i]!=0){
            if(man[i]>1&&arr[i]!=0){

            printf("%d : %d duplicate numbers \n", arr[i], man[i]);
            }
        }
    }
}
