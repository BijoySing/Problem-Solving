#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
const int N = 1e5;
bool vis[N];

// void bfs(int src){

// }
int32_t main()
{
    int t = 1;
    while (t--)
    {
        int n, e;

        cin >> n >> e;
        vector<int>v[n];

        for (int i = 0; i < e; i++)
        {
            // Your code here
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        int q;
        cin >> q;
        int c = 1, f = 0;
        while (q--)
        {
            int a, b;
            f = 0;
            // cout << c++ << "->  ";
            cin >> a >> b;
            for (auto u : v[a])
            {
                if (u == b)
                {
                    f = 1;
                    break;
                }
            }
            if (f || a==b)
                cout << "YES" << endl; // yes;
            else
                no;
        }
    }
}