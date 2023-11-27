#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pp(khartarm) cout << khartarm <<endl
#define int  long long
#define pb(khartarm) push_back(khartarm);
#define ck(khartarm) cerr << #khartarm << " = " << khartarm << endl;
const int N=1e5;
vector<int>g[N];
int vis[N];
int level[N];
queue<int>q;
int bfs(int s)
{
    q.push(s);
    vis[s]=1;

    while(!q.empty())
    {
        int cur=q.front();
        cout<<cur<<" ";
        q.pop();
        for(int u:g[cur])
        {
            if(!vis[u])
            {
                q.push(u);
                vis[u]=1;
                level[u]=level[cur]+1;
            }
        }

    }

}
int32_t main()
{
    memset(vis,0,sizeof(vis));
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    int s;
    cin>>s;
    bfs(s);
    for(int i=1;i<=n;i++)cout<<level[i]<<" ";

}
