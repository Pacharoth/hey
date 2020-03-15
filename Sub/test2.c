#include <stdio.h>
#include <stdbool.h>
bool checkPrimeNumber(int num){
    int i;
    for(i=2 ; i<num ; i++){
        if(num%i==0){
            return true;

        }

    }

}
int main(){
    bool man;
    int p;
    printf("Enter number");
    scanf("%d",&p);
    man = checkPrimeNumber(p);
    if( man==false){
        printf("It is primary");

    }else if (man==true){
        printf("It is not primary");
    }

}

