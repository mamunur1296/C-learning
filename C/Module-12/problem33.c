#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n ; i++)
    {
        int p1, p2, day;
        scanf("%d %d %d", &p1, &p2, &day);

        int originalDays = (p1 * day) / (p1 + p2);
        int fewerDays = day - originalDays;

        printf("%d\n", fewerDays);
    }

    return 0;
}
