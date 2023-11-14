#include <stdio.h>
int main()
{
    int n, m, o = 1;
    scanf("%d", &n);
    m = n - 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= o; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        if (i <= n-1)
        {
            m--;
            o += 2;
        }
        else
        {
            m++;
            o -= 2;
        }

        printf("\n");
    }

    return 0;
}