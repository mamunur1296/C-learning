#include <stdio.h>
/*
 2:- Return + No Parameter Function 
    retun-type Name() 
    {

    }

*/

// int sum()
// {
//     int a , b;
//     scanf("%d %d",&a,&b);
//     return a+b;
// }
int sum(void)
{
    int a , b;
    scanf("%d %d",&a,&b);
    return a+b;
}

int main()
{       
    printf("%d",sum(100));
    return 0;
}