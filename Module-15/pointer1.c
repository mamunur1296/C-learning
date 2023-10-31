#include <stdio.h>
int main()
{       
    double a = 5.50;  // 8 byte mamory gate .
    double *ptr=&a;  // 4 byte memory gate .
    double *ptr2= ptr;
    a=10.6; //same to all 
    *ptr2=10.5; // same to all 
    printf("Valu of a %0.2lf\n",a); 
    printf("Valu of ptr %0.2lf\n",*ptr);
    printf("Valu of *ptr2 %0.2lf\n",*ptr2);
     printf("Valu of a %d\n", sizeof(a)); // mamoory alocation 8 byte
    printf("Valu of ptr %d\n",sizeof(ptr));  // mamoory alocation 4 byte
    printf("Valu of ptr %d\n",sizeof(*ptr));   // mamoory alocation 8 byte
    return 0;
}