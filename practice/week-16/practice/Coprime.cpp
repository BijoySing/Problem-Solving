/**
author:  Bijoy Singh Rajput
 " Nam Tho Sunahi Hoga"
**/
#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pp(x) cout << x <<endl
#define int long long
#define ck(x) cerr << #x << " = " << x << ssdl;
#define sz 10000
vector<int>adj[sz+5];
int vis[sz+5];
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+2],pos[1005]={};
        for(int i=1; i<=n; i++)
        {

            cin>>a[i];
            pos[a[i]]=i;
        }
        int xx=0;
        int f=0;
        vector<int>v;
        for(int i=1;i<=1000;i++)
        {
            for(int j=i;j<=1000;j++)
            {
                f=__gcd(i,j);
                if(pos[i]&&pos[j]&&f==1)
                {
                    xx=pos[i]+pos[j];
                    v.push_back(xx);
                }
            }
        }
        sort(v.rbegin(),v.rend());
        if(v.size()==0)pp(-1);
        else cout<<v[0]<<endl;
    }
}