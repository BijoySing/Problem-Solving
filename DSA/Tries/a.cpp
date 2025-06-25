#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <limits>

using namespace std;

const int INF = 1e9;

int N, M;
vector<vector<int>> adj;
set<int> currentPath;
vector<int> bestCycle;
int bestSum = INF;

void dfs(int u, vector<int>& path, vector<bool>& visited) {
    visited[u] = true;
    path.push_back(u);
    currentPath.insert(u);

    for (int v : adj[u]) {
        if (currentPath.count(v)) {
            // Cycle detected
            vector<int> cycle;
            bool found = false;
            for (int node : path) {
                if (node == v) found = true;
                if (found) cycle.push_back(node);
            }
            sort(cycle.begin(), cycle.end());
            int sum = 0;
            for (int node : cycle) sum += node;

            if (sum < bestSum || (sum == bestSum && cycle < bestCycle)) {
                bestSum = sum;
                bestCycle = cycle;
            }
        } 
        else if (!visited[v]) {
            dfs(v, path, visited);
        }
    }

    path.pop_back();
    currentPath.erase(u);
}

int main() {
    cin >> N >> M;
    adj.assign(N + 1, vector<int>());

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<bool> visited(N + 1, false);
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            vector<int> path;
            dfs(i, path, visited);
        }
    }

    for (int node : bestCycle) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
