#include <stdio.h>
void Would(){
    printf("Would  Start\n");

    printf("Would End\n");
}
void Hello(){
    printf("Hello  Start\n");
    Would();
    printf("Hello End\n");
}
int main()
{       
    printf("Main Start\n"); 
    Hello();
    printf("Man  End\n");
    return 0;
}