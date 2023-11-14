#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    if (a == 'z') {
        printf("a");
    } else {
        printf("%c", a + 1);
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if ((a + b - c == d) ||
        (a - b + c == d) ||
        (a * b + c == d) ||
        (a * b - c == d) ||
        (a + b * c == d) ||
        (a - b * c == d))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
       
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a - b > 0)
    {
        printf("%d", a - b);
    }
    else
    {
        printf("0");
    }
    return 0;
}