#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{       
    char arr[1000001] ;
    scanf("%s",arr);
    for (int i = 0; arr[i] != '\0' ; i++)
    {
       if (arr[i] == ',') {
            arr[i] = ' '; 
        }
        if(arr[i]== toupper(arr[i])){
            arr[i]=tolower(arr[i]);
        }else{
            arr[i]=toupper(arr[i]);
        }
    }
    printf("%s",arr);
    
    return 0;
}