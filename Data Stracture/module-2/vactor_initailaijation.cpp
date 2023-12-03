#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<int> v;  // initialize vector type 1
    // vector<int> v(5);  // initialize vector type 2 with size 5
    // vector<int> v(5,100); //  initialize vector type 3 with size 5 and value
    // vector<int>v2(5,110);
    // vector<int>v(v2);  // type 4
    int a[6] = {10, 20, 30, 40, 50, 60};
    // vector<int> v(a, a + 6); // array copy type 5
    vector<int> v ={10,10,20}; // daynamic ly got space and work 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    cout << v.size() << endl;

    return 0;
}
