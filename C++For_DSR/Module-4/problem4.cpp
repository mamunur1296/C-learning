#include <bits/stdc++.h>
using namespace std;
using namespace std;

class Student
{
public:
    int ID;
    char Name[1001];
    char Section;
    int TotalMarks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student h;
        h.TotalMarks = INT_MIN;

        for (int j = 0; j < 3; j++)  
        {
            Student s;
            cin >> s.ID >> s.Name >> s.Section >> s.TotalMarks;
            if (s.TotalMarks > h.TotalMarks || (s.TotalMarks == h.TotalMarks && s.ID < h.ID))
            {
                h = s;
            }
        }

        cout << h.ID << " " << h.Name << " " << h.Section << " " << h.TotalMarks << endl;
    }

    return 0;
}
