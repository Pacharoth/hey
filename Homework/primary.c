#include<stdio.h>

int main() {
  int Num=1,i,c;
  while(Num>0){
    printf("Enter number");
    scanf("%d",&Num);
    c=0;
    for (i = 2; i < Num; i++)
    {
  	if(Num%i == 0)
  	{
     	  c=1;
  	  break;
	}
    }
    if(c == 0 )
    {
	printf(" %d Primary number\n ", Num);

    }else if(c==1){
        printf("%d not primary number\n",Num);
    }
    Num++;

  }
  return 0;
}
