#include <stdio.h>
#include <string.h>
int main()
{       
    char a[1000000];
    gets(a);
    int count=0;
    for (int i = 0; a[i] != '\\' ; i++)
    {
        count ++;
    }
    a[count]='\0';
    printf("%s",a);
    return 0;
}