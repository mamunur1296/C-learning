#include <stdio.h>
int fun(int n)
{
    if(n==0) return 1;
    int anse=fun(n-1);
    return anse*n;
}
int main()
{       
    int n;
    scanf("%d",&n);
    int ans=fun(n);
    printf("%d",ans);
    return 0;
}