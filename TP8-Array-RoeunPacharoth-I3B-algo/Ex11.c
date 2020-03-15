#include <stdio.h>
int main(){
    char man[100][100],nani[100],em[100][100];
    int math[100],comp[100],f[100],eng[100],num,i;
    int average[100];

    printf("Size of people: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        printf("Enter your name [%d]:",i);
        scanf("%s",&man[i]);
        printf("Enter your sex [%d]:",i);
        scanf(" %c",&nani[i]);

        printf("Enter your email [%d]:",i);
        scanf("%s",&em[i]);
        printf("Enter your Math score [%d]:",i);
        scanf("%d",&math[i]);
        printf("Enter your Computer score [%d]:",i);
        scanf("%d",&comp[i]);
        printf("Enter your French score [%d]:",i);
        scanf("%d",&f[i]);
        printf("Enter your English score [%d]:",i);
        scanf("%d",&eng[i]);
    }
    printf("No.\tName\t\tSex\tEmail\t\tMath\tComputer\tFrench\t English\t Grade\t GPA\n");

    for(i=1;i<=num;i++){
            printf("%d",i);
        printf("\t%s\t\t%c\t%s\t\t%d\t%d\t\t%d\t %d",man[i],nani[i],em[i],math[i],comp[i],f[i],eng[i]);
        average[i]=(math[i]+comp[i]+f[i]+eng[i])/4;
        if(average[i]>=90){
            printf("\t\t A+\t 3.6-4\n ");
        }else if(average[i]>=80){
            printf("\t\t A\t 3.2-3.6\n ");
        }else if(average[i]>=70){
            printf("\t\t B+\t 2.8-3.2\n ");
        }
        else if(average[i]>=60){
            printf("\t\t B\t2.4-2.8\n");
        }else if(average[i]>=50){
            printf("\t\t C+\t 2-2.4\n");
        }else if(average[i]>=40){
            printf("\t\t C\t 1.6-2\n");
        }else if(average[i]>=30){
            printf("\t\t D+\t 1.2-1.6\n");
        }else if(average[i]>=20){
            printf("\t\t D\t 0.8-1.2\n");
        }else if(average[i]>=0){
            printf("\t\t E\t 0-0.8\n");
        }
    }
    /*for(i=1;i<=num;i++){
        average[i]=(math[i]+comp[i]+f[i]+eng[i])/4;
        if(average[i]>=90){
            printf(" \t A+ \t 3.6-4\n ");
        }else if(average[i]>=80){
            printf(" \t A \t 3.2-3.6\n ");
        }else if(average[i]>=70){
            printf(" \t B+ \t 2.8-3.2\n ");
        }
        else if(average[i]>=60){
            printf(" \t B \t 2.4-2.8\n ");
        }else if(average[i]>=50){
            printf(" \t C+ \t 2-2.4\n ");
        }else if(average[i]>=40){
            printf(" \t C \t 1.6-2\n ");
        }else if(average[i]>=30){
            printf(" \t D+ \t 1.2-1.6\n ");
        }else if(average[i]>=20){
            printf(" \t D \t 0.8-1.2\n ");
        }else if(average[i]>=0){
            printf(" \t E \t 0-0.8\n ");
        }

    }*/



}
