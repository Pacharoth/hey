#include <stdio.h>

int main()
{
  int i, Num=1, c;

  while(Num<=500){
    c = 0;
    for (i = 2; i <= Num/2; i++)
    {
  	if(Num%i == 0)
  	{
     	  c++;
  	  break;
	}
    }
    if(c == 0 && Num >2)
    {
	printf(" %d\n ", Num);
    }  Num++;
  }
  return 0;
}
