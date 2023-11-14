#include <stdio.h>
void Func(int * arr,int n) // in this line int * arr mench it is address of arr . not coppy of array 
{
    4[arr]=500; // this system i mack it access all this array change  this is derafarance 
}
int main()
{       
    int arr[5]={10,20,30,40,50}; 
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    Func(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}