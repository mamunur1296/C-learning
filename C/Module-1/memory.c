#include<stdio.h>

int main() {
    // An integer in C typically uses 4 bytes (32 bits) of memory.
    // This allows it to represent values ranging from -2,147,483,648 (-10^9) to 2,147,483,647 (10^9).
    // In this example, we assign the value 1,000,000,000 to an integer variable 'a'.
    // This value is well within the range of representable integers.
    
    int a = 1000000000;
    printf("%d ", a);
    
    // A 'long long int' in C is used for storing very large integer values.
    // It typically uses 8 bytes (64 bits) of memory, allowing it to hold a wide range of values.
    // This allows it to represent values ranging from -9,223,372,036,854,775,808 (-2^63 or 10^18) to
    // 9,223,372,036,854,775,807 (10^63 - 1 or 10^18).

    
    long long int b = 1000000000000;
    printf("\n%lld", b);

    // Example using float data type
    float floatValue = 3.14159265359;
    
    // Floats are used to represent single-precision floating-point numbers.
    // They can store decimal values with about 6-9 digits of precision.
    // Here, we assign a floating-point value (π) to a float variable.
    
    printf("Float Value: %f\n", floatValue);

    // Example using double data type
    double doubleValue = 3.14159265359;

    
    // Doubles are used to represent double-precision floating-point numbers.
    // They provide higher precision and can store decimal values with about
    // 15-17 digits of precision. Here, we assign a value (π) to a double variable.
    
    printf("Double Value: %lf\n", doubleValue);
    return 0;
}
