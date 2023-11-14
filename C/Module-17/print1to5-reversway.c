#include <stdio.h>
void  fun(int i){
    if(i==6) return;  // call this cass bass cass
    fun(i+1); // this is recation revars way  cass .
    printf("%d",i);
 


}
int main()
{       
     fun(1);
    return 0;
}