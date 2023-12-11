#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    // list<int>myList; // no valu inthis list
    // list<int>myList(10); // this list are size 10;
    // list<int>myList(10,5); // eatch list contain valu 5
    // int arr[5]={10 ,20,30,40,50};
    // list<int>mylist(arr,arr+5); // array to list 
    // vector<int> v={100,200,300,400,500}; 
    // list<int>mylist(v.begin(),v.end()); // vactor to list
    list<int>myList({1000,2000,3000,4000,5000});
    list<int>mylist(myList); // list to list 
    // this is iterator . 
    // for(auto it=mylist.begin();it!=mylist.end();it++)
    // {
    //     cout << *it << " "; 
    // }.
    for (int valu : mylist)
    {
        cout << valu << " ";
    }
 
    
    return 0;
}