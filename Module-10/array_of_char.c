#include <stdio.h>
int main()
{       
    char arr[5];
    for(int i=0;i<5;i++){
        scanf("%c",&arr[i]);
    } 
    for (int i = 0; i < 5 ; i++)
    {
        printf("%c\n",arr[i]);
    }
    int saige= sizeof(arr)/sizeof(char);
    printf("%d",saige);
    return 0;
}