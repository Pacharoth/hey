#include<stdio.h>
#include <string.h>
int i;
typedef struct dob{
    int day,month,year;
}dob;

typedef struct studentInform{
    char name[20];
    char gender;
    dob age;
    int score;
}stdInf;
void dateOfBirth(stdInf s[10]){
    int day1 = s[0].age.day;
    int month1 = s[0].age.month;
    int year1= s[0].age.year;



}
void lowestOrHighest(stdInf s[10]){
    int high = s[0].score;
    char name[20];
    strcpy(name,s[0].name);
    char gender= s[0].gender;
    int day1 = s[0].age.day;
    int month1 = s[0].age.month;
    int year1= s[0].age.year;

    for(i=0;i<10;i++){
        if(high<s[i].score){
            high = s[i].score;
            strcpy(name,s[i].name);
       if(year1>=1&&month1<=12&&day1>=1){
                if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12){
                    if(day1<=31){
                        day1 = s[i].age.day;
                        month1 = s[i].age.month;
                        year1= s[i].age.year;
                    }
                    }
                    else if(month1==4||month1==6||month1==9||month1==11){
                    if(day1<=30){
                        day1 = s[i].age.day;
                        month1 = s[i].age.month;
                        year1= s[i].age.year;
                    }
                }else if (year1%4==0){
                    if(month1==2){
                        if(day1<=29){
                            day1 = s[i].age.day;
                        month1 = s[i].age.month;
                        year1= s[i].age.year;
                        }
                    }

                }else if(year1%4!=0){
                    if(month1==2){
                        if(day1<=28){
                              day1 = s[i].age.day;
                        month1 = s[i].age.month;
                        year1= s[i].age.year;
                        }
                    }
                }

            }else{
                day1 = 0;
                        month1 = 0;
                        year1= 0;

            }



        }
            gender =s[i].gender;
        }

    printf("The highest :");
   printf("student's name:%s\tgender:%c\t%d/%d/%d\tscore:%d\n",name,gender,day1,month1,year1,high);
    for(i=0;i<10;i++){
        if(high>s[i].score){
            high = s[i].score;
            strcpy(name,s[i].name);
            gender= s[i].gender;
            if(year1>=1&&month1<=12&&day1>=1){
                if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12){
                    if(day1<=31){
                        day1 = s[i].age.day;
                        month1 = s[i].age.month;
                        year1= s[i].age.year;
                    }
                    }
                    else if(month1==4||month1==6||month1==9||month1==11){
                    if(day1<=30){
                        day1 = s[i].age.day;
                        month1 = s[i].age.month;
                        year1= s[i].age.year;
                    }
                }else if (year1%4==0){
                    if(month1==2){
                        if(day1<=29){
                            day1 = s[i].age.day;
                        month1 = s[i].age.month;
                        year1= s[i].age.year;
                        }
                    }

                }else if(year1%4!=0){
                    if(month1==2){
                        if(day1<=28){
                              day1 = s[i].age.day;
                        month1 = s[i].age.month;
                        year1= s[i].age.year;
                        }
                    }
                }

            }else{
                day1 = 0;
                        month1 = 0;
                        year1= 0;

            }



        }
    }
    printf("The lowest :");
    printf("student's name:%s\tgender:%c\t%d/%d/%d\tscore:%d\n",name,gender,day1,month1,year1,high);


}
void displayStudent(stdInf s[10]){
    for(i=0;i<2;i++){
        printf("Enter student's name:");
        scanf(" %s",&s[i].name);
        printf("Enter gender:");
        scanf(" %c",&s[i].gender);
        printf("Enter day:");
        scanf("%d",&s[i].age.day);
        printf("Enter month:");
        scanf("%d",&s[i].age.month);
        printf("Enter year:");
        scanf("%d",&s[i].age.year);
        printf("Enter score: ");
        scanf("%d",&s[i].score);
    }
    lowestOrHighest(s);


}
int main(){
    stdInf s[10];
    displayStudent(s);
}
