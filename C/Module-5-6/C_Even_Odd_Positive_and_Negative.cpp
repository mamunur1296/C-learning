#include <stdio.h>
int main()
{       
    int a , b;
    scanf("%d",&a);
    int even=0,odd=0,pos=0,neg=0;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d",&b);
        if(b%2==0){
            even++;   
        }else{
            odd++;
        }
        if(b<0 ){
            neg++;
        }else if(b>0) {
            pos++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

    return 0;
}