#include <stdio.h>
int main(){
    int man[11][11];

    int sum =1;
    printf("\t");
    for(int i=0;i<=10;i++){
        printf("%d\t",i);
    }
    printf("\n\n");
    for (int i =0;i<=10;i++){
        printf("%d\t",i);
        for(int j =0;j<=10;j++){
                 man[i][j]=i*j;
                printf("%d\t",man[i][j]);
        }
        printf("\n\n");

    }
}
