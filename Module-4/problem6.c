#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min, max;
    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    printf("%d %d", min , max);

    return 0;
}
