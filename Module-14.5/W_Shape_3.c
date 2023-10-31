#include <stdio.h>
int main()
{
    int n, m, o = 1;
    scanf("%d", &n);
    m = n - 1;
    for (int i = 1; i <= (n * 2); i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= o; j++)
        {
            printf("*");
        }
        if (i < n)
        {
            o += 2;
            m--;
        }
        else if (i == n)
        {
            o ;
            m;
        }
        else
        {
            o -= 2;
            m++;
        }

        printf("\n");
    }

    return 0;
}