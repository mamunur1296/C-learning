/**
 * & address of variable name 
*/

#include <stdio.h>

int main() {
    // int rahim, korim;
    // char c;
    // float f;

    // // Use spaces in the format specifier to consume white space
    // scanf("%d %d %c %f", &rahim, &korim, &c, &f);

    // int sum = rahim + korim;
    // printf("%d %c %.3f", sum, c, f);
    // -----------------------------------------
    int a, b;
    char c;

    // Method 1: Read two integer values from the user with a character separator
    // and then print them with the same character separator.
    scanf("%d%c%d%c", &a, &c, &b, &c);
    printf("%d%c%d%c\n", a, c, b, c);

    // Method 2: Read two integer values from the user with '%' as a separator,
    // and then print them with '%' as a separator.
    scanf("%d%% %d%%", &a, &b);
    printf("%d%% %d%%\n", a, b);

    // Method 3: Read two integer values from the user with 'a' and 'b' as separators,
    // and then print them with 'a' and 'b' as separators.
    scanf("%da %db", &a, &b);
    printf("%da %db\n", a, b);

    return 0;
}


/**
 * Notes:
 * - The '%' character in format specifiers needs to be escaped as '%%'.
 * - Different methods for reading and printing values with different separators are shown.
 * - Remember to include '\n' in printf to add a newline for proper output formatting.
 */

