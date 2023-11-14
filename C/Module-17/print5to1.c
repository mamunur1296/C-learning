#include <stdio.h>
void fun(int i){
    if(i<=0) return; // bass code condition 
    printf("%d",i);
    fun(i-1); // recation 
}
int main()
{       
    fun(5); 
    return 0;
}