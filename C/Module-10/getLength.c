#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);

    int count = 0;
    int i = 0;
    int st=strlen(a);
    while (a[i] != '\0') {  // Change double quotes to single quotes
        count++;
        i++;
    }
    
    printf("%s", a);  // Use %d to print an integer

    return 0;
}
