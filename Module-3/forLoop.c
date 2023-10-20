// #include<stdio.h>
// int main(){
//     // for (int i = 0; i <= 5; i++)
//     // {
//     //     //printf("Hello would\n");
//     // }
//    int i = 0;
//     while (i <= 20) {
//         if (i % 2 == 0) { // Check if i is even (divisible by 2)
//             printf("%d ", i);
//         }
//         i++; // Increment i after checking the condition
//     }
    
//     return 0;
// }
#include <stdio.h>

int main() {
    // Print the text on a single line
    printf("Hello, World!\n");

    // Define the input string
    char inputString[100]; // Assuming a maximum length of 100 characters
    
    // Read the input string from stdin
    scanf("%[]", inputString);

    // Print the input string to stdout
    printf("%s\n", inputString);

    return 0;
}

