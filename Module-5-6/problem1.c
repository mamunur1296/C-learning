#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int hasEven = 0;  
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            hasEven = 1;  
        }
    }
    if (!hasEven) {
        printf("-1\n");
    }
    return 0;
}
