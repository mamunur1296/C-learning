#include <stdio.h>
int main()
{
    int n, m, o = 1;
    scanf("%d", &n);
    m = n - n;
    o=n*2-1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= o; j++)
        {
            printf("*");
        }
        m++;
        o -=2;
        printf("\n");
    }
    return 0;
}