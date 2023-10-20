#include <stdio.h>
int main()
{       
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int maxl=0;
    int min=arr[0];
    int minl=0;
    for (int i = 0; i < n ; i++)
    {
       if(arr[i] > max){
        max=arr[i];
        maxl=i;
       }
       if(arr[i] < min){
        min=arr[i];
        minl=i;
       }
    }
    int temp = arr[minl];
    arr[minl] = arr[maxl];
    arr[maxl]= temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}