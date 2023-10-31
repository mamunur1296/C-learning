#include <stdio.h>
int main()
{       
    int a=100;
    int * ptr=&a;
    // a=200;
    *ptr=200; //same to a = 200
    printf("valu of a %d\n",a);
    printf("valu of a %d\n",*ptr);//same to ("valu of a %d\n",a); or ("valu of a %d\n",*ptr);
    printf("address of a - %p\n",&a); 
    printf("address of a - %p\n",ptr);
    printf("address of a - %p\n",&ptr);  
    return 0;
}