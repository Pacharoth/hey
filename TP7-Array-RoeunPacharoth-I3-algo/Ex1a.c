#include<stdio.h>
int main(){
    char vowel[5];
    vowel[0]='a';vowel[1]='e';
    vowel[2]='i';vowel[3]='e';
    vowel[4]='u';
    printf("Vowel : ");
    for(int i=0;i<5;i++){
        printf("%c ",vowel[i]);
    }
}
