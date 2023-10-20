#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[10001];
        scanf("%s", a);
        int cap = 0, smoll = 0, numb = 0;
        int i = 0;
        while (i < strlen(a))
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                cap++;
            }
            else if (a[i] >= 'a' && a[i] <= 'z')
            {
                smoll++;
            }
            else if (a[i] >= '0' && a[i] <= '9')
            {
                numb++;
            }

            i++;
        }
        printf("%d %d %d\n", cap, smoll, numb);
    }

    return 0;
}