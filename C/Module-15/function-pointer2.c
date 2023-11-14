#include <stdio.h>
#include <string.h>
void Fung(char *arr)
{
    int length=strlen(arr);
    printf("%d",length);
}
int main()
{       
    char arr[100]="HelloWould"; 
    Fung(arr);
    return 0;
}