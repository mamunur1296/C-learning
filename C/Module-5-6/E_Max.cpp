#include <stdio.h>
int main()
{       
    int a ;
    int max=0;
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        int num;
        scanf("%d",&num);
        if(num>max){
           max=num; 
        }
    }
    printf("%d",max);
    return 0;
}