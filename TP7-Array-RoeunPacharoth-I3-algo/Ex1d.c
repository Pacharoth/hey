#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char name[10][20];
    for(i=0;i<=9;i++){
        printf("Enter your name[%d]",i+1);
        scanf("%s",&name[i]);
        printf("Your name[%d] is %s\n",i+1,name[i]);
    }
}
