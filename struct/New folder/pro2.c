#include<stdio.h>

void display(){
     FILE *fq;
    char s[100];
    fq = fopen("hello.txt","r");

    fgets(s,255,fq);
    printf("\n%s\n",s);
    while(fgets(s,255,fq)!=NULL){
        printf(" %s",s);
    }
    fclose(fq);
}
struct Student{
    int id;
    char name[20];
    char gender;
    int age;
};
void append(){
       FILE *fp;
    int num,i;
    struct Student s[5];
    fp = fopen("hello.txt","a+");
    printf("\n\nWe append the file\n\n");
//    printf("**********Student's Menu*************\n\n\n");
//    fprintf(fp,"SID\tSname\tSgender\t Sage\n");
    for(i=0;i<3;i++){
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
int main(){
    display();
    append();
}
