#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a= new int[3]; 
    int *b= new int[3];
    for (int i = 0; i < 3; i++) // input dynamic arr 
    {
        cin>>a[i]; // input array item
        b[i]=a[i]; // coppy array b to array a;
    }
    for (int i = 0; i < 3; i++) cout << a[i] << " "; // output dynamic arr
    cout << endl;
    delete[] a; // delete array 
    a= new int[5]; // create new array 
    for (int i = 0; i < 3; i++) a[i] = b[i]; // coppy arrar a to array b 
    delete[] b; // delete array b
    a[3]=40; a[4]=50; // assain value 
    for (int i = 0; i < 5; i++) cout << a[i] << " "; // output dynamic arr
    
    return 0;
}