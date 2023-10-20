#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d ", &m);
        int arr[m];
        int i = 0;
        while (i < m)
        {
            scanf("%d", &arr[i]);
            i++;
        }
        int x;
        scanf("%d", &x);
        int ans = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[j] == x)
            {
                ans++;
                break;
            }
        }
        if (ans > 0)
        {
            printf("YES\n");
        }else 
        {
            printf("NO");
        }
        
        
    }

    return 0;
}