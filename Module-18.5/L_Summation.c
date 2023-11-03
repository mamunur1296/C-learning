#include <stdio.h>
long long int fun(int arr[],int n,int i,long long int sum)
{
    if(i==n) return sum;
    sum += arr[i];
    long long int rejult = fun(arr,n,i+1,sum);
    return rejult ;
}
int main()
{       
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    long long int sum = fun(arr,n,0,0); 
    printf("%lld",sum);
    return 0;
}