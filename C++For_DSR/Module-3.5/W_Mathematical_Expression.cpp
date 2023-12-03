#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char d, e;
    cin >> a >> d >> b >> e >> c;

    if ((d == '+' && a + b == c) || (d == '-' && a - b == c) || (d == '*' && a * b == c))
    {
        cout << "Yes" << endl;
    }
    else
    {
        
        if (d == '+')
            cout << a + b << endl;
        else if (d == '-')
            cout << a - b << endl;
        else if (d == '*')
            cout << a * b << endl;
    }

    return 0;
}
