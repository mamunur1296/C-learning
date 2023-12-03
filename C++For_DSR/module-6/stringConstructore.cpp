#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s= " Hello Would"; // this is normal way declair and inithalize string ; 
    string s("Hello Would "); // this is 1st opthion in dec: and ini: string ; 
    string s("Hello would" , 7); // in this catch print first 7 caractare just ; 
    string y;
    string s(y,7); // in this catch print before 7 caractore ot end ok ;
    string s(26,"S") // in this catch print 26 "S" in this string s ; 
    return 0;
}