#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[101];

    for (int i = 0; i < n; i++) {
        scanf("%s", a); // Read the string

        if (strlen(a) <= 10) {
            printf("%s\n", a); // If the string is not too long, print it as is.
        } else {
            int len = strlen(a) - 2; // Calculate the number of characters between the first and last characters.
            printf("%c%d%c\n", a[0], len, a[strlen(a) - 1]);
        }
    }

    return 0;
}
