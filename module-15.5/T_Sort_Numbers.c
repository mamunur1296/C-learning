#include <stdio.h>
void PrintArr(int *arr)
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (arr[i] < arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[3];
    int a,b,c;
   
    for (int i = 0; i <= 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    a=arr[0];b=arr[1];c=arr[2];
    PrintArr(arr);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    
    return 0;
}