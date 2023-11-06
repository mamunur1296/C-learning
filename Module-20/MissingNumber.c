#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int j = 0; j < t; j++) {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        if (A == 0 || B == 0 || C == 0) {
            printf("-1\n");
        } else {
            long long int Ms = A * B * C;
            if (M % Ms == 0) {
                printf("%lld\n", M / Ms);
            } else {
                printf("-1\n");
            }
        }
    }

    return 0;
}