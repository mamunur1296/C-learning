#include <stdio.h>
int main()
{
    int n, m, o = 1;
    scanf("%d", &n);
    m = n - 1;
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int j = o ; j >=1; j--)
        {
            printf("%d",j);
        }
        m--;
        o ++;

        printf("\n");
    }

    return 0;
}