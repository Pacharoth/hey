#include <stdio.h>
int main(){
    char str[100]="New York City";
    int i,man;

    man =strlen(str);
    for(i=0;i<=man;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i] +32;
        }
    }
    printf("%s",str);


}
