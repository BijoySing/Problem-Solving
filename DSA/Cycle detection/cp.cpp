#include <bits/stdc++.h>
using namespace std;


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt; cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> g[n + 1];
        for(int i = 2; i <= n; ++i){
            int u; cin >> u;
            g[u].push_back(i);
            g[i].push_back(u);
        }
        string s;
        cin >> s;
        s = "#" + s;
        function<int(int, int, int)> dfs = [&](int x, int prev, int f){
            int ret = 0;
            for(auto i : g[x]){
                if(i ^ prev){
                    if((s[i] == 'S' || s[i] == 'C') && f){
                        ret = dfs(i, x, f);
                    } else if(s[i] == 'S'){
                        ret += dfs(i, x, 1) + 1;
                    } else if(s[i] == 'C'){
                        ret += min(dfs(i, x, 1) + 1, dfs(i, x, 0));
                    }
                    else {
                        ret += dfs(i, x, 0);
                    }
                }
            }
            return ret;
        };
        int ans = 0;
        for(int i = 1; i <= n; ++i){
            if(s[i] == 'S'){
                ans = dfs(i, -1, 1) + 1;
                break;
            }
        }
        cout << ans << endl;
    }
}
