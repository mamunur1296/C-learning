#include <iostream>
using namespace std;

int main() {
    int a, c;
    char b;
    cin >> a >> b >> c;
    cout << ((b == '<' && a < c) || (b == '>' && a > c) || (b == '=' && a == c) ? "Right" : "Wrong") << endl;

    return 0;
}
