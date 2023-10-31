#include <stdio.h>
/*
    No Return + Paramerer 
*/

void sum(int x, int y)
{
    printf("%d",x+y);
}
int main()
{       
    int x,y;
    scanf("%d%d",&x,&y);
    sum(x,y);
    return 0;
}