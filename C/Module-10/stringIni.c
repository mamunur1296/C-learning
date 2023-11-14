#include <stdio.h>
int main()
{       
    char arr[]={"mamun"}; //inisilize . bydefolt this string mack last items \0 or null
    int sz=sizeof(arr);  // create null size 
    printf("%s\n",arr); // print string 
    printf("%d",sz);
    return 0;
}