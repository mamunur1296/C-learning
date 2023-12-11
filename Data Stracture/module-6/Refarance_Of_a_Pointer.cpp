#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
void fun(int *& p)
{
    p=NULL;
}
int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << ptr << endl;
    cout << val << endl;

    return 0;
}