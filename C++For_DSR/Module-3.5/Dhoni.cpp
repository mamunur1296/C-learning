#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[100];
};
int main()
{
    Cricketer *Dhoni = new Cricketer;
    Dhoni->jersey_no = 15;
    strcpy(Dhoni->country , "KolKata");
    Cricketer *Kole= new Cricketer;
    Kole->jersey_no=Dhoni->jersey_no;
    cout << Kole->jersey_no << endl;
    delete Dhoni;
    cout << Kole->jersey_no << endl;
    return 0;
}
