#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long int Sum(long long int a, long long int n)
{
    double sum = 0;

    for (long long int i = 2; i <= n; i += 2)
    {
        sum += pow(a * 1.0, i * 1.0);
    }
    return sum;
}

int main()
{
    long long int a, n;
    cin >> a >> n;
    cout << Sum(a, n) << endl;
    return 0;
}
