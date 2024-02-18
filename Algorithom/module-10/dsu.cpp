#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
const int N=1e5+5;
int parantArr[N];
int groupSize[N];
int groupLevel[N];
void dsu_Initialize(int n){
    for (int i = 0; i < n; i++)
    {
        parantArr[i]=-1;
        groupSize[i]=1;
        groupLevel[i]=0;
    } 
    parantArr[1]=2;
    parantArr[2]=3;
    parantArr[5]=6;
    parantArr[6]=7;

}
// int fiend(int node){
//     if(parantArr[node] == -1) return node;
//     else fiend(parantArr[node]);
// }
int fiend(int node){ // optimize 
    if(parantArr[node] == -1) return node;
    int leder= fiend(parantArr[node]);
    parantArr[node]=leder;
}

void dsu_union(int n1,int n2){
    int leder1 = fiend(n1);
    int leder2 = fiend(n2);
    parantArr[leder1]=leder2;
}
void dsu_unionbyLevel(int n1,int n2){
    int leder1 = fiend(n1);
    int leder2 = fiend(n2);
    if(groupLevel[leder1] > groupLevel[leder2]){
        groupLevel[leder2] = leder1;
    }else if(groupLevel[leder2]>groupLevel[leder1]){
        groupLevel[leder1] =leder2;
    }else{
        parantArr[leder1]=leder2;
        parantArr[leder2] ++;
    }
}
void dsu_unionBySize(int n1,int n2){
    int leder1 = fiend(n1);
    int leder2 = fiend(n2);
    if(groupSize[leder1] > groupSize[leder2]){
        parantArr[leder2]=leder1;
        groupSize[leder1] +=groupSize[leder2];
    }else {
        parantArr[leder1]=leder2;
        groupSize[leder2] +=groupSize[leder1];
    }
}
int main()
{
    dsu_Initialize(7);
    dsu_unionBySize(1,2);
    dsu_unionBySize(2,3);
    dsu_unionBySize(4,5);
    dsu_unionBySize(5,6);
    dsu_unionBySize(1,4);

    cout << fiend[1] << endl;
    cout << fiend[4] << endl;
    
    
    
    return 0;
}