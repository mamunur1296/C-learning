#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &x);
    int index=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            index = i+1;
            break;
        }
    }

    if (index >= 1)
    {
        printf("%d", index -1);
    }else{
        printf("-1");
    }
    



    return 0;
}