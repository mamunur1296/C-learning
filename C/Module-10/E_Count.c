#include <stdio.h>
#include <string.h>
int main()
{       
    char a[1000001] ;
    gets(a);
    int ans=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        ans=ans + (a[i] -'0');
    }
     
    printf("%d",ans);
    
    return 0;
}