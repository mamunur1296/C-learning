#include <stdio.h>
int main()
{
    int a, b, c = 1;
    scanf("%d", &a);
    b = a - 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        c += 2;
        b--;
        printf("\n");
    }
    b=b+1;
    for (int i = a-1; i >0; i--)
    {
        for (int j = 0; j <=b; j++)
        {
            printf(" ");
        }
        for (int j = c-4; j >0; j--)
        {
            printf("*");
        }
        b++;
        c-=2;
        printf("\n");
        
    }
    

    return 0;
}