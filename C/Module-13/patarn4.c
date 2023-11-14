#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    b=0;
    c=a+2;
    for (int i = a; i > 0; i--)
    {
        for (int j = b; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = c; j > 0; j--)
        {
            printf("*");
        }
        c=c-2;
        b++;
        printf("\n");
    }

    return 0;
}