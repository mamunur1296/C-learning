#include <stdio.h>
int count_before_one(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 1) {
            count++;
        } else {
            break;  
        }
    }
    return count;
}

int main()
{       
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",count_before_one(arr,a));

    return 0;
}