#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <limits>

using namespace std;

const int INF = 1e9;

int N, M;
vector<vector<int>> adj;
vector<int> color;
vector<int> path;
vector<int> bestCycle;
int bestSum = INF;

bool dfs(int u) {
    color[u] = 1;
    path.push_back(u);

    for (int v : adj[u]) {
        if (color[v] == 0) {
            if (dfs(v)) return true;
        }
        else if (color[v] == 1) {
            // Found a cycle
            vector<int> cycle;
            auto it = find(path.begin(), path.end(), v);
            for (; it != path.end(); it++) {
                cycle.push_back(*it);
            }
            sort(cycle.begin(), cycle.end());
            int sum = 0;
            for (int node : cycle) sum += node;

            if (sum < bestSum || (sum == bestSum && cycle < bestCycle)) {
                bestSum = sum;
                bestCycle = cycle;
            }
        }
    }

    color[u] = 2;
    path.pop_back();
    return false;
}

int main() {
    cin >> N >> M;
    adj.assign(N + 1, vector<int>());
    color.assign(N + 1, 0);

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    for (int i = 1; i <= N; i++) {
        if (color[i] == 0) {
            dfs(i);
        }
    }

    for (int node : bestCycle) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
