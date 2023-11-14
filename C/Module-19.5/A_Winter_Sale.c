#include <stdio.h>

int main() {
    float X;
    float P;
    scanf("%f %f", &X, &P);
    float originalPrice = P / ((100 - X) / 100);
    printf("%.2f", originalPrice);

    return 0;
}
