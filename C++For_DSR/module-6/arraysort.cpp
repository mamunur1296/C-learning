#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;  // Note: Use 'string' instead of 'String'
   // cin >> s; // this is single word input 
    getline(cin , s); // this is multiword input system . 
    sort(s.begin(), s.end()); // sort are organize lower to upper 
    // s.begin() minse first pointer , and s.end() miens last pointer . 
    // Iterators mins   pointer * 
    cout << s << endl;
    return 0;
}
