/**
author:  Bijoy Singh Rajput
 " Nam Tho Sunahi Hoga"
**/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pp(x) cout << x <<endl
//#define int long long
#define ii int
#define ck(x) cerr << #x << " = " << x << endl;
const int N = 10001+10;
vector<int> g[N];
int ind[N];
int main()
{
    int n,m,t;
    //map<int,vector<int>>mp;

    vector<int> ans;


    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
    g[x].push_back(y);
        ind[y]++;
    }
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=1; i<=n; i++)
    {
        if(ind[i]==0)
        {
            q.push(i);
        }
    }
    while(q.size()!=0)
    {
        int u=q.top();
        ans.push_back(u);
        q.pop();
        for(auto i:g[u])
        {
            ind[i]--;
            if(ind[i]==0)q.push(i);
        }
    }
    for(auto u:ans)cout<<u<<" ";



}
