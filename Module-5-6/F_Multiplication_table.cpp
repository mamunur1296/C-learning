#include <stdio.h>
int main()
{       
    int a , mul=0;
    scanf("%d",&a);
    for (int i = 1; i <=12; i++)
    {
        mul=a*i;
        printf("%d * %d = %d\n",a,i,mul);
    }
    
    return 0;
}