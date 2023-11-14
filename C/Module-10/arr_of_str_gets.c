#include <stdio.h>
#include <string.h>
int main()
{       
    char arr[100];
    // gets(arr); 
    fgets(arr,19,stdin);
    arr[15] = '\0';  // i this arra in this home 
    printf("%s",arr);
    return 0;  
}