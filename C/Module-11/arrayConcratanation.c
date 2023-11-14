#include <stdio.h>
#include <string.h>
int main()
{       
    char a[100]="Mamunur",b[100]="Roshid" ;
    strcat(a,b);
    // int i=0;
    // int j=strlen(a);
    // while (i<=strlen(b)) // this is bangla method
    // {
    //     a[j]=b[i];
    //     i++;
    //     j++;
    // }
    printf("%s",a);
    return 0;
}