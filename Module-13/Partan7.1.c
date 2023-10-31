#include <stdio.h>
int main()
{
    int a, b, c = 1;
    scanf("%d", &a);
    b = a - 1;
    for (int i = 1; i <= (a * 2) - 1; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        if (i <= a - 1)
        {
            c += 2;
            b--;
        }
        else
        {
            c -= 2;
            b++;
        }

        printf("\n");
    }
    return 0;
}