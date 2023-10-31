#include <stdio.h>
#include <string.h>
int my_len(char * arr)
{
    return strlen(arr) ;
}

int main()
{       
    char arr[1000];
    scanf("%s",arr);
    printf("%d",my_len(arr)); 
    return 0;
}