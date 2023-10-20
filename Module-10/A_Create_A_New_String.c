#include <stdio.h>
#include <string.h>
int main()
{       
    char a[1000]; 
    char b[1000];
    gets(a);
    gets(b);
    int c,d;
    c=strlen(a);
    d=strlen(b);
    printf("%d %d\n",c,d);
    printf("%s %s",a,b);
    return 0;
}