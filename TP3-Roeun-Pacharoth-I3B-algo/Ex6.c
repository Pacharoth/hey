#include<stdio.h>
int main() {
    int score;
    printf("Please your score to identify your grade: ");
    scanf("%d",&score);

    if (score>=50&&score<=59)
    {
        /* code */
        printf("You got grade E");
    }
    else if (score>=60&&score<=69)
    {
        printf("You got grade D");
    }
    else if (score>=70&&score<=79)
    {
        printf("You got grade C");
    }
    else if (score>=80&&score<=89)
    {
        printf("You got grade B");
    }
    else if (score>=90)
    {
        printf("You got grade A");
    }else
    {
        printf("You got grade F and you don't pass");
    }
    
    
    return 0;
}