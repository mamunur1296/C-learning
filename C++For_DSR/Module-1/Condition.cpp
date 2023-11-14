//tarnary oparator 

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    // if(n%2==0){  // this is if condition 
    //     cout<<n;
    // }else{
    //     cout<<"This is not even\n";
    // }
    n %2==0 ? cout<<n : cout<<"This is not even\n"; // this is tarnary oparator 
    return 0;
}

