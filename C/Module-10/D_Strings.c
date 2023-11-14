#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s%s", a, b);
    int asiz = strlen(a);
    int bsiz = strlen(b);

    printf("%d %d\n", asiz, bsiz);
    printf("%s%s\n", a, b);
    char tamp = a[0];
    a[0] = b[0];
    b[0] = tamp;
    printf("%s %s", a, b);

    return 0;
}