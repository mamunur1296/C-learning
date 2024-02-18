#include <iostream>
#include <vector>
#include <queue>
#include <cstring> // for memset
using namespace std;

const int MAX_NODES = 1e5 + 1;

vector<int> iv[MAX_NODES];
bool vig[MAX_NODES];
int level[MAX_NODES];
int path[MAX_NODES];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    vig[s] = true;
    level[s] = 0;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (auto ch : iv[parent]) {
            if (!vig[ch]) {
                q.push(ch);
                vig[ch] = true;
                level[ch] = level[parent] + 1;
                path[ch] = parent;
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;
        iv[a].push_back(b);
        iv[b].push_back(a);
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int s, d;
        cin >> s >> d;

        // Reset arrays for each query
        memset(vig, false, sizeof(vig));
        memset(level, -1, sizeof(level));
        memset(path, -1, sizeof(path));

        bfs(s);

        if (level[d] == -1) {
            cout << "-1" << endl;
        } else {
            cout << level[d] << endl;
        }
    }

    return 0;
}
