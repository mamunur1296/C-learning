#include <stdio.h>
int x=100; // global scope 
int add()
{
    int x=200; // Local scope 
    printf("%p\n",&x);
    return 0;
}
int main()
{       
    add();
     int x=300; // Local scope 
     printf("%p",&x);
    return 0;
}