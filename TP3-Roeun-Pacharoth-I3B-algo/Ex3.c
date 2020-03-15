#include <stdio.h>
#include <time.h>
int main() {
    int p, hr,mn,d;

    printf("Please enter valid time(0-24)hr and (0-59)mn\nEnter hour: ");
    scanf("%d",&hr);
    printf("Enter minute:");
    scanf("%d",&mn);

    p=mn/60+hr;
    d = (mn%60);
        if(hr>=0&&hr<=24&&mn>=0&&mn<=60){
            /* code */
            if(hr>=0&&hr<=24&&mn>=0&&mn<=60&&d>=1&&d<=58){
            printf("%dhr %dmn",p,d+1);


            }else {
            if(d>=59&&p<23){
            printf("%dhr %dmn",p,d+1-60);
            }else if (p>=23)
            {
            printf("%dhr %dmn",p-24,d+1);
            }
            }
        }

        else if(p>24){
            printf("invalid time");
        }

    return 0;
}
