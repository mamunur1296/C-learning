#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = "abdff", b[100] = "abdf";
    int i = 0;
    int v=strcmp(a,b);
    if(v==0){
        printf("a == b ");
    }else if (v<0)
    {
        printf("a Choto  ");
    } else{
        printf("b Choto  ");
    }
    
    
   
    // while (1)  // lackcicalgrafy compair row method . 
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("soman");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("a choto");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("b choto");
    //         break;
    //     }
    //     if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("a choto");
    //         break;
    //     }
    //     else
    //     {
    //         printf("b choto");
    //         break;
    //     }
    // }

    return 0;
}