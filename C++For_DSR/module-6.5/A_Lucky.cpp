#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int j = 0; j < n; j++)
    {
        string s;
        getline(cin, s);

        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (i <= 2)
            {
                sum1 += s[i] - '0';
            }
            if (i > 2)
            {
                sum2 += s[i] - '0';
            }
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
