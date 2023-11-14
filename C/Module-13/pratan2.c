#include <stdio.h>
int main()
{       
    int n;
    scanf("%d",&n) ;
    int m=n;
    for (int i = n; i > 0 ; i--)
    {
        for (int j = m; j > 0; j--)
        {
              printf("*");
        }
        m--;
        printf("\n");
    }
    
    return 0;
}