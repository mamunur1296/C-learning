#include <stdio.h>
#include <string.h>
int main()
{       
    char a[100]="Apple" , b[100]="orange" , c[100]="banana";
    for (int i = 0; i <= strlen(b); i++) // mack this coppy method
    {
        a[i]=b[i];
    }
    strcpy(b,c);//array coppy method 
    printf("%s %s",a ,b);
    return 0;
}