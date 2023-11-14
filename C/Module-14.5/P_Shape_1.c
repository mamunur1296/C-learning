#include <stdio.h>
int main()
{       
    int n,m;
    scanf("%d",&n);
    m=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("*");
        }
        m--;
        printf("\n");
        
    }
     
    return 0;
}