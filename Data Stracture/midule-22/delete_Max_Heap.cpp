#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
void insart(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2;
        if (v[par_idx] < v[cur_idx])
        {
            swap(v[par_idx], v[cur_idx]);
        }
        else
            break;
        cur_idx = par_idx;
    }
}
void deleteHeap(vector<int> &v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int idx_cur=0;
    while(true)
    {
        int idx_left= (idx_cur * 2) + 1;
        int idx_Right= (idx_cur * 2) + 2;
        int idx_last= v.size()-1;
        if(idx_left <= idx_last && idx_Right <=idx_last)
        {
            // doutoi asa 
            if(v[idx_left]>=v[idx_Right] && v[idx_left]>v[idx_cur])
            {
                swap(v[idx_left],v[idx_cur]);
                idx_cur=idx_left;
            }else if(v[idx_Right]>=v[idx_left] && v[idx_Right]>v[idx_cur])
            {
                /* code */
                swap(v[idx_Right],v[idx_cur]);
                idx_cur=idx_Right;
            }else{
                break;
            }
            
        }else if(idx_left <= idx_last)
        {
            //left asa 
            if(v[idx_left]>v[idx_cur]){
                swap(v[idx_left],v[idx_cur]);
                idx_cur=idx_left;
            }else{
                break;
            }
        }else if(idx_Right <=idx_last)
        {
            //Right asa 
            if(v[idx_Right]>v[idx_cur]){
                swap(v[idx_Right],v[idx_cur]);
                idx_cur=idx_Right;
            }else{
                break;
            }
        }else {
            break;
        }
    }
    
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insart(v,x);
    }
    deleteHeap(v);
    for (int val : v)
        cout << val << " ";
    return 0;
}