// function ar kaj ses hola sobe variable goula delete kora day ..

#include <stdio.h>
// array nela mast ba ar size o neta hoba . and arra  amra 2 vabe neta pari 1 . arr[] or * arr
void Funk(int *arr,int n)
{
    int siz=sizeof(arr)/sizeof(int); // can not fiend . karon akhane arr of 0 ar address asca 
    printf("%d\n",siz);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
     
}
int main()
{       
    int arr[5]={10,20,30,40,50};
    int siz=sizeof(arr)/sizeof(int); 
    printf("%d\n",siz); 
    Funk(arr,5);
    return 0;
}