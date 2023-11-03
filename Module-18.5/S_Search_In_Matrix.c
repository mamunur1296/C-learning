#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int num;
    scanf("%d", &num);
    int exjesting=1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]==num)
            {
               exjesting=0;
            }
            
        }
    }
    if(exjesting){
        printf("will take number");
    }else{
       printf("will not take number"); 
    }
    return 0;
}