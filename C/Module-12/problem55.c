#include <stdio.h>
int main()
{       
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        int i=1;
        while (i<=m)
        {
            printf("%d ",i);
            i++;
        }
        printf("\n");
    }
     
    return 0;
}