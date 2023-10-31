// exam: 2 problem = 2

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n > 0)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     if (n < 0)
//     {
//         for (int i = n; i <= 0; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }
// exam: 2 problem = 3
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }

//     return 0;
// }

// exam: 2 problem = 4
// #include <stdio.h>
// int main()
// {       
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n ; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int nNum=0;
//     int pNum=0;
//     for (int i = 0; i <n; i++)
//     {
//         if(arr[i]>0){
//             pNum=pNum + arr[i];
//         }else{
//             nNum=nNum + arr[i];
//         }
//     }
    
//     printf("%d %d ",pNum,nNum);
     
//     return 0;
// }
// exam: 2 problem = 5
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int x, y;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d %d", &x, &y);
    
    int newArr[n]; 

    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            newArr[i] = y;
        }
        else
        {
            newArr[i] = arr[i]; 
        }
    }
    for (int i =n-1; i >=0; i--)
    {
        printf("%d ",newArr[i]);
    }
    
    return 0;
}
