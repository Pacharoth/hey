#include <stdio.h>
#include<stdbool.h>
#include<string.h>
#include <stdlib.h>
#include<time.h>

//Ex1
int computeFactorial_ex1(int num);
//Ex2
void computeFactorial1_ex2(int num);
//Ex3
void findOddorEven(int num);
//Ex4
bool checkPrimeNumber(int num);
//Ex5
void findTheSeries(int num);
//Ex6
void checkCharacter(char chr,char str[100]);
//Ex7
int computeSummation(int num);
int askUserInput(int num){
    printf("Enter number:");
    scanf("%d",&num);
    return num;
}
//Ex8
int random(int man){

    for(int i=1;i<1000;i++){
        man =rand()%1000;
    }

    return man;
}
void checkRandom();

int main(){
    int k =3;
    bool p;


    checkRandom();



}



//Ex8

void checkRandom(){
    int i=1,count=0;
    int randome,k,num;
   // random = rand() %1000;

//random = rand() %1000;
    while(i==1){
            printf("Enter number to predict:");
            scanf("%d",&num);
            randome=random(k);
            count++;
        if(num<randome){
            printf("Wrong prediction\nThis number is smaller than or lower than random number\nplease input big number\n");


        }else if(randome<num){
            printf("Wrong prediction\nThis number is bigger than or higher than random number\nplease input small number\n");

        }
        else if(randome == num){
            printf("Congratulation you win\n");
            printf("time you guessing or prediction is %d",count);
            break;
        }
    }
}


