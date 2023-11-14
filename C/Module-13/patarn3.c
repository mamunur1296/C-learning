#include <stdio.h>
int main()
{       
    int a,b=1,c=1;
    scanf("%d",&a);
    b=a-1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <=b; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=c; k++)
        {
            printf("*");
        }
        b--;
        c=c+2;
        printf("\n");
    } 
    return 0;
}