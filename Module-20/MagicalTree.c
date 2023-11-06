#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m,a,b=1;
    if (n == 1)
    {
        m = 5 + n;
    }
    
    else
    {
       m = 5 + 1 + (n / 2);
    }
    a = m-1;
    for (int i = 1; i <=m ; i++)
    {
        for (int k = a; k >=1 ; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <=b; j++)
        {
            printf("*");
        }
        b +=2;
        a--;
        printf("\n");
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <=5 ; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=n ; k++)
        {
            printf("*");
        }
        for (int j = 1; j <=5 ; j++)
        {
            printf(" ");
        }
        printf("\n");
        
    }
    
    
    return 0;
}