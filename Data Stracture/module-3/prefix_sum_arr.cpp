#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) // complex O(n)
    {
        cin >> a[i];
    }

    vector<long long> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++) // complex O(n)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    for (int i = 0; i < q; i++) // complex O(q)
    {
        long long n1, n2;
        cin >> n1 >> n2;
        n1--;
        n2--;
        long long sum;
        if (n1 == 0)
            sum = pre[n2];
        else
            sum = pre[n2] - pre[n1 - 1];
        cout << sum << endl;
    }

    return 0;
}
// totla complex city O(n+n+q)
//                   =>O(n+q)
//                   =>O(n+q) (big value) n and q are same 
//                 so => O(n) Complexcity   