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
    int mNum = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mNum)
        {
            mNum = arr[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mNum)
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}