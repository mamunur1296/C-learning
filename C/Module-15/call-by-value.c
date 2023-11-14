#include <stdio.h>

void Funk(int x) {
    // x is a new variable with a copy of the value from the caller
    x = 200;
    printf("Funk function: x Address - %p\n", &x); // Funk's x has a different memory address
    printf("Funk function: x value - %d\n", x);
}

int main() {
    int x = 100;
    printf("Main function: x Address - %p\n", &x);
    printf("Main function: x value - %d\n", x);

    Funk(x); // Passes a copy of the value of x to Funk

    return 0;
}
