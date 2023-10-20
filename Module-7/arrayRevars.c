#include <stdio.h>

int main() {
    int n; // Initialize sum to zero
    scanf("%d", &n);
    int array[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        sum = sum + array[i];
    }

    printf("%d\n", sum);
    return 0;
}
