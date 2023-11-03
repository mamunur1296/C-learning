#include <stdio.h>
void  fun(int i){
    if(i==6) return;  // call this cass bass cass
    printf("%d",i);
    fun(i+1); // this is recation cass . 


}
int main()
{       
     fun(1);
    return 0;
}