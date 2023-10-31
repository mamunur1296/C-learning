#include <stdio.h>
//1 :- Return + Parameter Function Sentex
 /*
   Return-type NameOf_Function()
   {
    return ;
   }
 */

int Add(int Number1 , int Number2)
{
    return Number1 + Number2;
}


int main()
{       
     int n,m;
     scanf("%d %d", &n,&m);
     int sum = Add(n,m);
     printf("%d",sum);
    return 0;
}