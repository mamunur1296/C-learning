#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int le = 1e5 + 5;
bool vig[le];
vector<int> arr[le];
int parr[le];
int ans = 0;

void dfs(int parent) {
  vig[parent] = true;
  for (auto chi : arr[parent]) {
    if (vig[chi] && parr[parent] != chi) {
      ans++;
    }
    if (!vig[chi]) {
      parr[chi] = parent;
      dfs(chi);
    }
  }
}

int main() {
  int n, e;
  cin >> n >> e;
  while (e--) {
    int a, b;
    cin >> a >> b;
    arr[a].push_back(b);
    arr[b].push_back(a);
  }
  memset(parr, -1, sizeof(parr));
  ans = 0;
  for (int i = 1; i <= n; i++) {
    if (!vig[i]) {
      dfs(i);
    }
  }
  cout << ans / 2 << endl; 
  return 0;
}
