#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    cin.ignore(); 
    getchar() // int type data input neyar pora ata use korta hobe . 
    string s;
    
    // cin >> s; // For single word input (no spaces)
    getline(cin, s); // For full line input
    
    cout << s << endl;

    return 0;
}
