#ifndef STR_H_INCLUDED
#define STR_H_INCLUDED
#include<stdio.h>
void strupr(char string[100])
{
    int i;
    while(string[i]){
       if ( string[i] >= 'a' && string[i] <= 'z' )
       {
          string[i] = string[i] - 32;
       }
       string++;
    }
}

#endif