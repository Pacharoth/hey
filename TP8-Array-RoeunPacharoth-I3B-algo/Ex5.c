#include <stdio.h>
int main(){
    int man[11];
    int max,mini;

    for(int i =1;i<=10;i++){
        printf("Enter number[%d]: ",i);

        scanf("%d",&man[i]);
    }max=man[1];mini=man[1];
    for(int i = 1;i<=10;i++){
        if(max<man[i]){
            max = man[i];

        }else if(mini>man[i]){
            mini = man[i];
        }
    }
    printf("maximum is %d\n",max);
    printf("minimum is %d",mini);

//    for(int i)
}
