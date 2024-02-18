#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, a, b;
        cin >> h >> a >> b;
        
        int Distance = a - b;

        if (Distance <= 0 )
        {
            cout << "Impossible" << endl;
        }
        else
        {
            int cycles = ((h - a) / Distance);
            cout << (cycles * 2) + 1 << endl;
        }
    }

    return 0;
}
