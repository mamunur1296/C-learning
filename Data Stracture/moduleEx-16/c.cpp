#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int flag = 0;

        if (s.size() == 14)
        {
            string number[] = {"+88013", "+88017", "+88014", "+88019", "+88015", "+88012", "+88016", "+88018"};

            for (int i = 0; i < 8; i++)
            {
                flag = 1;
                for (int j = 0; j < 6; j++)
                {
                    if (s[j] != number[i][j])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }

            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
