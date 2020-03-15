#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2==0){
        if(n>=0){
            printf("Even position number");

        }
        else{
            printf("Even negative number");

        }
        }
        else{
            if(n>=0){
                printf("Odd positive number");
            }
            else{
                printf("Odd negative number");
            }
        }


   /* if(n%2==0&& n>=0){
        printf("Positive Even number");

    }
    else if (n%2==0 && n<0){
        printf("Negative even number");
    }
    else if (n%2!=0 && n>=0){
        printf("Positive odd number");

    }
    else if (n%2!=0 && n<0){
        printf("Negative odd number");
    }

    else{
        printf("Hello my friend");
    }
*/
}

