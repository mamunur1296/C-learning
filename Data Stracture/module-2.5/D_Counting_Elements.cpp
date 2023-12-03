#include <iostream>
#include <vector>
#include <algorithm> // Include the necessary header for find

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // Use find to search for a[i] + 1 in the range
        auto it = find(a.begin(), a.end(), a[i] + 1);

        // Check if the value was found (it is not equal to a.end())
        if (it != a.end())
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
