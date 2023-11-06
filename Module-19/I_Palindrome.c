#include <stdio.h>
#include <string.h>
int main()
{       
    char a[10000];
    scanf("%s",&a);
    int inPalindroma=1;
    for (int i = 0 ,j=strlen(a)-1; i<j ; i++,j--)
    {
        if(a[i]!=a[j]){
            inPalindroma=0;
        }
    }
    if(inPalindroma){
           printf("YES"); 
    }else{
           printf("NO"); 
    }
    return 0;
}