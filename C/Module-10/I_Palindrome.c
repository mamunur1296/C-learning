#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10001];
    scanf("%s", &arr);
    int i = 0, j = strlen(arr) - 1;
    int count = 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            count++;
        }
        else
        {
            count = 0;
        }
        i++;
        j--;
    }
    if (count <= 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}