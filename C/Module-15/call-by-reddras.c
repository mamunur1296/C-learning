#include <stdio.h>

void Funk(int *x) {
    // Modify the value at the memory location pointed to by x
    *x = 500; //derafarance 
    printf("Funk function: Address of x: %p\n", &*x);
    printf("Funk function: Value of x: %d\n", *x);
}

int main() {
    int x = 100;
    printf("Main function: Address of x: %p\n", &x);
    printf("Main function: Value of x after Funk: %d\n", x);
    
    // Pass a pointer to x, allowing Funk to modify the original x
    Funk(&x);

    printf("Main function: Value of x after Funk: %d\n", x);
    
    return 0;
}
