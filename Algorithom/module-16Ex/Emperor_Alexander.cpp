#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N=1e5+5;
int par[N];
int groupSize[N];
void initialize(int n)
{
    for(int i=0;i<=n;i++)
    {
        par[i]=-1;
        groupSize[i]=1;
    }
}
int dsuL(int x)
{
    if(par[x]==-1) return x;
    int leader=dsuL(par[x]);
    par[x]=leader;
    return leader;
}
void dsuu(int node1,int node2)
{
    int leader1=dsuL(node1);
    int leader2=dsuL(node2);
    if(groupSize[leader1] > groupSize[leader2])
    {
        par[leader2]=leader1;
        groupSize[leader1]+=groupSize[leader2];
    }
    else
    {
        par[leader1]=leader2;
        groupSize[leader2]+=groupSize[leader1];
    }
}
class edge
{
public:
    int u,v;
    long long int w;
    edge(int u,int v,long long int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
bool cmp(edge a,edge b)
{
    return a.w < b.w;
};
int main()
{
    int n,e;
    cin>>n>>e;
    initialize(n);
    vector<edge> edgelist;
    while( e--)
    {
        int a,b;
        long long int c;
        cin>>a>>b>>c;
        edgelist.push_back(edge(a,b,c));

    }
    sort(edgelist.begin(),edgelist.end(),cmp);
    long long int cost=0;
    int nm=0;
    int cc=0;
    for(edge ed:edgelist)
    {
        int leader1=dsuL(ed.u);
        int leader2=dsuL(ed.v);
        if(leader1==leader2)
        {
            cc++;
        }
        else
        {
            nm++;
            dsuu(ed.u,ed.v);
            cost+=ed.w;
        }
    }
    bool flag=false;
    for(int i=1;i<=n;i++)
    {
        int leader1=dsuL(1);
        int leader2=dsuL(i);
        if(leader1!=leader2)
        {
            flag=true;
        }
    }
    if(nm==n-1)
    {
        cout<<cc<<" "<<cost;
    }
    else if(flag==true && nm<n)
    {
        cout<<"Not Possible"<<endl;
    }

    return 0;
}