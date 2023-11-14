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
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]+arr[j]==8){
                
                flag=1;
            }
            
        }
        
    }
    if(flag==0){
        printf("No");
    }else{
        printf("YES");
    }
    
    
    return 0;
}