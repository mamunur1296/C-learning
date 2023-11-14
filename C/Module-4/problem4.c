#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    while (a >= 10) {
        a /= 10;
    }

    if (a % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
