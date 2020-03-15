#include <stdio.h>
#include <string.h>
int main(){
    char grade;
    printf("Enter your grade: ");
    scanf("%c",&grade);
    if(grade =='A'){
        printf("Excellent");
    }else if (grade=='B')
    {
        printf("Very good");
    }
    else if (grade=='C')
    {
        printf("Good");
    }
    else if (grade =='D'){
        printf("Fair");
    }
    else if (grade=='E'){
	printf("nearly fail");
    }
    else if(grade == 'F')
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid grade");
    }
    
    
}
