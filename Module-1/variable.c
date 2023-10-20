/**
 * Format Specifiers in C
 * -----------------------
 * Format specifiers are used in C for reading and writing data of different types.
 * They help specify the type of data being processed.
 */

#include <stdio.h>  // Include the standard input-output library

int main() {
    int number1 = 100 , number2=200;

    // The %d format specifier is used for integers
    printf("The value of the number is : %d  %d", number2 , number1  );

    float number3 = 5.525;
    printf("\nThe value of the number is: %0.3f ", number3);

    // this char are contain 1 carecter . ather owas mack error 
    char ami = 'A';
    printf("\nThe value of the Char is: %c ", ami);  

    return 0;
}

/**
 * Format Specifiers:
 * - %d: Used for integers (e.g., 42)
 * - %f: Used for floating-point numbers (e.g., 3.14)
 * - %c: Used for characters (e.g., 'A')
 * - %s: Used for strings (e.g., "Hello")
 * - %p: Used for pointers (e.g., memory addresses)
 * - %x: Used for hexadecimal numbers (e.g., 0x1A)
 */

/**
 * Note:
 * - The & operator is used with scanf to get the memory address of the variable.
 * - Different format specifiers are used with different data types.
 */
