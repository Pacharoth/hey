#include<stdio.h>
struct Student{
    int id;
    int score;
    char name[5];
};
struct Student s[2];
int displayMAX(struct Student s[2]){
    int i,max;
    max = s[0].score;
    for(i=0;i<2;i++){
        if(max<s[i].score){
            max =s[i].score;
        }
    }
    return max;
}
int main(){
    int i,max;
    struct Student s[2];
    for(i=0;i<2;i++){
        scanf("%d",&s[i].score);
    }
    max = displayMAX(s);//if we do loops in function just give the value on no need to tag
    printf("%d",max);
}
