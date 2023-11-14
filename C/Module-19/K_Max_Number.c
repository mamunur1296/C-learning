#include <stdio.h>
int fun(int arr[],int n, int i)
{
    if(i==n) return 0;
    int ans=fun(arr,n,i+1);
    if(arr[i]>ans){
        return arr[i];
    }else{
        return ans;
    }
    
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
    int rej=fun(arr,n,0);
    printf("%d",rej);
     
    return 0;
}