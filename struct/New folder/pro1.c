#include <stdio.h>
#include <stdlib.h>
struct Student{
    int id;
    char name[20];
    char gender;
    int age;
};
int main(){
    FILE *fp;
    int num,i;
    struct Student s[5];
    fp = fopen("hello.txt","w");
    printf("**********Student's Menu*************\n\n\n");
    fprintf(fp,"SID\tSname\tSgender\t Sage\n");
    for(i=0;i<5;i++){
        printf("Enter id of [%d]Student: ",i);
        scanf("%d",&s[i].id);
        fprintf(fp,"%d\t",s[i].id);

        printf("Enter name of [%d]Student: ",i);
        scanf(" %s",&s[i].name);
        fprintf(fp,"%s\t",s[i].name);
        printf("Enter gender of [%d]Student: ",i);
        scanf(" %c",&s[i].gender);
        if(s[i].gender=='M'||s[i].gender=='m'||s[i].gender=='F'||s[i].gender=='f'){
          fprintf(fp,"%c\t",s[i].gender);
        }else{
            fprintf(fp,"Null\t");
        }

        printf("Enter age of [%d]Student: ",i);
        scanf("%d",&s[i].age);
        if(s[i].age>1&&s[i].age<50){
            fprintf(fp,"%d\n",s[i].age);
        }else{
            fprintf(fp,"Null\n");
        }

        printf("\n");




    }

//    fprintf(fp,"%d\t%s\t%c\t%d",s[i].name,s[i].gender,s[i].age);

    fclose(fp);

}
