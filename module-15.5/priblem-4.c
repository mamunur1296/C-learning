#include <stdio.h>
int change_it(int * arr ,int n) 
{
    return arr[n-1]=100;
}
int main()
{       
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    change_it(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}