#include <stdio.h>

void Print()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    Print();
    return 0;
}
