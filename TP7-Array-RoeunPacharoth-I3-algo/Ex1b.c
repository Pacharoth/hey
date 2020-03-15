#include<stdio.h>
int main(){
    char alpha[50];
    int i;
    printf("Alphabets :");
    for(i='A';i<='Z';i++){
        alpha[i]=i;
        printf("%c ",alpha[i]);

    }
}
