#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row;
    scanf("%d", &row);
    int col = row;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int primary = 0;
    int seckendary = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                primary += arr[i][j];
            }
            if (i + j == row - 1)
            {
                seckendary += arr[i][j];
            }
        }
    }
    printf("%d",abs( seckendary - primary));
    return 0;
}