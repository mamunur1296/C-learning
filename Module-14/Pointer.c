#include <stdio.h>
int main()
{       
    int x=10;
    printf("%d\n",x);
    int* p=&x;
    printf("%p\n",&x);
    printf("%p\n",&p);
    // deRafarance . address ar madhooma valu bar kora 
    printf("%d\n",*p);
    // Derafarance deya valu change 
    *p=100;
      printf("%d\n",x);
    return 0;
}