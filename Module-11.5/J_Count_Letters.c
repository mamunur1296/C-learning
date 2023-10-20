#include <stdio.h>

int main()
{
    char a[1000001];
    scanf("%s", a);

    int count[26] = {0};

    int len = 0;
    while (a[len] != '\0')
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            int val = a[i] - 'a';
            count[val]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}
