#include <stdio.h>

int main() {
    char a;
    scanf(" %c", &a);
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        printf("ALPHA\n");
        if (a >= 'a' && a <= 'z') {
            printf("IS SMALL\n");
        } else {
            printf("IS CAPITAL\n");
        }
    } else if (a >= '0' && a <= '9') {
        printf("IS DIGIT\n");
    } 

    return 0;
}
