#include <stdio.h>
int main()
{       
    int n; 
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int low=arr[0];
    int lowInd=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<low){
            low=arr[i];
            lowInd = i;
        }
    }
    
    printf("%d %d",low ,lowInd+1) ;
    return 0;
}