#include <stdio.h>

void odd_even(int * arr , int n)
{
  
    int e = 0;
    int o = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }

    printf("%d %d\n", e, o);
}

int main()
{
      int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    odd_even(arr,n);
    return 0;
}
