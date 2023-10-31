#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            if (arr[i] == 0)
            {
                printf("%d ", arr[i]);
            }
            else
            {
                printf("%d ", arr[i] = 1);
            }
        }
        else
        {
            printf("%d ", arr[i] = 2);
        }
    }

    return 0;
}