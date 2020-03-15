#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char gender[20];
    printf("Enter your gender: ");
    scanf("%s",gender);
    printf("Enter your age: ");
    scanf("%d",&age);


    if(strcmp(gender,"female")==0|strcmp(gender,"f")==0||strcmp(gender,"F")==0||strcmp(gender,"Female")==0|strcmp(gender,"FEMALE")==0){
        if(age >=18 & age<=35){
        printf("(F)You have to pay your tax in this country");
        }
        else{
            printf("no need to pay tax");
        }

    }else if (strcmp(gender,"male")==0||strcmp(gender,"m")==0||strcmp(gender,"M")==0||strcmp(gender,"Male")==0||strcmp(gender,"MALE")==0){
        if(age >=20){
        printf("(M)You have to pay your tax in this country");
        }
	 else{
        printf("no need to pay tax");
    }
    }
}

