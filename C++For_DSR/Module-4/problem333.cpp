#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char s[1000001];

    while (cin.getline(s, 1000001)) {
        int n = strlen(s);
        int noSpace = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                s[noSpace++] = s[i];
            }
        }
        s[noSpace] = '\0'; 
        sort(s, s + noSpace);
        cout << s << endl;
    }

    return 0;
}
