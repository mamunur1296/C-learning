#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);

    for (int t = 1; t <= test; t++) {
        int a;
        scanf("%d",&a);
        do
        {
            printf("%d ",a%10);
            a=a/10;
        } while (a!=0);  
        printf("\n");
    }

    return 0;
}
