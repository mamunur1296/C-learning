#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
// void swoip(int * a,int *b){
//     int tamp = *a;
//     *a=*b;
//     *b=tamp;
// }
int main()
{
    // int a, b, c, d, e;
    // cin >> a >> b >> c >> d >> e;
    // int just2mn = min(a, b); // just 2 value min or max fiend it .
    // int just2mx = max(a, b);
    // int mn = min({a, b, c, d, e}); // multipol value min or max fiend
    // int mx = max({a, b, c, d, e});
    // cout << mn << " " << mx << endl;
    // cout << just2mn << " " << just2mx << endl;
    int a, b;
    cin >> a >> b;
    // int tamp = a;
    // a=b;  // this is workking 
    // b=tamp;
    //swoip(a,b); // can not work
    //swoip(&a,&b); // this is working . 
    swap(a,b); // this is bilding method;
    cout << a << " " << b;
    return 0;
}