#include<stdio.h>
int checkChara(char n[100],char m){
    int i,status=0;
    for(i=0;i<strlen(n);i++){
        if(n[i]==m){
            status=1;
            break;
        }

    }
    if(status==1){
        printf("It is exist");
    }else{
        printf("it is not exist");
    }
    return NULL;
}
int main(){
    char n[100]="Hello world",m='h';
    printf("%c",checkChara(n,m));
}
