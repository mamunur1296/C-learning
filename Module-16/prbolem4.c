#include <stdio.h>
#include <string.h>

int is_palindrome(char *arr) {
    int a = 0;
    int b = strlen(arr) - 1;

    while (a < b) {
        if (arr[a] != arr[b]) {
            return 0; 
        }
        a++;
        b--;
    }

    return 1; 
}

int main() {
    char arr[1001];
    scanf("%s", arr);

    if (is_palindrome(arr)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
