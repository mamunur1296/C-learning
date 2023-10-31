#include <stdio.h>
int Add(int a, int b)
{
    return a+b;
}
int main()
{       
     int a,b;
     scanf("%d%d",&a,&b);
     int sum = Add(a,b);
     printf("%d",sum);
    return 0;
}