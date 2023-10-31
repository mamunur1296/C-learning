#include <stdio.h>
char small_to_capital(char alf)
{
    if(alf>='A' && alf <='Z'){
        return alf+32;
    }
}
int main()
{       
    printf("%c",small_to_capital('O'));
    return 0;
}