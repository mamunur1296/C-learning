#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
    scanf("%s", a);
    int count[26] = {0};
    for (int i = 0; i < strlen(a); i++)
    {
        count[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}