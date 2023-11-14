#include <stdio.h>
int my_abs(int n)
{
    if(n<=0){
        return n - n * 2;
    }
    return n;
}
int main()
{       
    int n;
    scanf("%d",&n);
    int ans= my_abs(n); 
    printf("%d",ans);
    return 0;
}