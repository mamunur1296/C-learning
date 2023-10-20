#include <stdio.h>
int main()
{       
    int n;
    scanf("%d",&n);

    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",&arr[i]);
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        count=count+arr[i]-'0';
        
    }
    printf("%d\n",count);
    return 0;
}