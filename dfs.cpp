  #include<bits/stdc++.h>
using namespace std;
const int N= 1e3+10;

vector<int>g[100];
bool vis[N];
void dfs(int node)
{
    cout<<node<<"-->";
    vis[node]=true;
    for(int child : g[node])
    {
         if(vis[child])
        {

            continue;
        }
        dfs(child);
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
//cout<<v<<" "<<e<<endl;

    for(int i=0; i<e; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
        // cout<<v1<<" "<<v2<<endl;

    }
    dfs(1);

}
/**

6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6

**/
