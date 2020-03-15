#include <stdio.h>
int main(){
    char man[13]="New York City";
    //char man[]={'N','e','w',' ','Y','o','r','k',' ','C','i','t','y'};


    char asci[13]="";
    for(int i =0;i<=13;i++){
        printf("%c",man[i]);
        asci[i]= man[i];
    }
    printf("\n");
    for(int i=0;i<=13;i++){
        if(asci[i]>='A'&&asci[i]<='Z'){
            asci[i]=asci[i] +32;

        }printf("%c",asci[i]);


    }
    printf("\nThe lowercase is %s",asci);
}


