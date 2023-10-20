#include <stdio.h>

int main() {
    // Arithmetic operators are used to perform mathematical operations on variables.

    int a = 10, b = 5;
    int result;

    // Addition: Adds two values.
    result = a + b; // result = 10 + 5 = 15
    printf("Addition: %d\n", result);

    // Subtraction: Subtracts the right operand from the left operand.
    result = a - b; // result = 10 - 5 = 5
    printf("Subtraction: %d\n", result);

    // Multiplication: Multiplies two values.
    result = a * b; // result = 10 * 5 = 50
    printf("Multiplication: %d\n", result);

    // Division: Divides the left operand by the right operand.
    result = a / b; // result = 10 / 5 = 2
    printf("Division: %d\n", result);

     float result1 = b*1.0 / a; // result = 10 / 5 = 2
    printf("Division: %f\n", result1);
    // Modulus (Remainder): Returns the remainder after division.
    result = a % b; // result = 10 % 5 = 0
    printf("Modulus: %d\n", result);

    // Increment: Increases the value of a variable by 1.
    a++; // a = 11
    printf("Increment: %d\n", a);

    // Decrement: Decreases the value of a variable by 1.
    b--; // b = 4
    printf("Decrement: %d\n", b);

    return 0;
}
