#include<stdio.h>
#include<time.h>


int main(){
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    printf("%d/%d/%d",t->tm_mon+1,t->tm_mday ,t->tm_year+1900);
}
