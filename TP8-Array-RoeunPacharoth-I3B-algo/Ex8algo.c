#include <stdio.h>
int main(){
    int num;
    printf("Enter size of the array: ");
    scanf("%d",&num);
    int i,max,max1,mini,mini1,man[100],women[100];
    for(i=1;i<=num;i++){
        printf("Enter number[%d] ",i+1);
        scanf("%d",&man[i]);
    }
    max = man[2];
    mini=man[1];
    for(i=1;i<=num;i++){
        if(max<man[i]){
            max=man[i];

        }else if(max1 <man[i]&&man[i]>max&& max){
            max1 = man[i];
        }
    }
    printf("The second maximum is %d",max1);

}
