#include<stdio.h>
#include <string.h>
int i;
typedef struct studentInform{
    char name[20];
    char gender;
    int age;
    int score;
}stdInf;
void lowestOrHighest(stdInf s[10]){
    int high = s[0].score;
    char name[20];
    strcpy(name,s[0].name);
    char gender= s[0].gender;
    int age=s[0].age;
    for(i=0;i<10;i++){
        if(high<s[i].score){
            high = s[i].score;
            strcpy(name,s[i].name);
            gender= s[i].gender;
            age=s[i].age;
        }
    }printf("The highest :");
    printf("student's name:%s\tgender:%c\tage:%d\tscore:%d\n",name,gender,age,high);
    for(i=0;i<10;i++){
        if(high>s[i].score){
            high = s[i].score;
            strcpy(name,s[i].name);
            gender= s[i].gender;
            age=s[i].age;
        }
    }
    printf("The lowest :");
    printf("student's name:%s\tgender:%c\tage:%d\tscore:%d\n",name,gender,age,high);


}
void displayStudent(stdInf s[10]){
    for(i=0;i<10;i++){
        printf("Enter student's name:");
        scanf(" %s",&s[i].name);
        printf("Enter gender:");
        scanf(" %c",&s[i].gender);
        printf("Enter age:");
        scanf("%d",&s[i].age);
        printf("Enter score: ");
        scanf("%d",&s[i].score);
    }
    lowestOrHighest(s);


}
int main(){
    stdInf s[10];
    displayStudent(s);
}
