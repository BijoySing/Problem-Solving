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
int dp[N];
int a[N];
int lis(int i)
{
    int c=1;
    if(dp[i]!=-1)return dp[i];
    for(int j=0; j<i; j++)
    {
        if(a[i]>a[j])
        {
            c=max(c,lis(j)+1);
        }
    }
    return dp[i]=c;

}
int32_t main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
   for(int i=0; i<n; i++)
    {
        ans=max(ans,lis(i));

    }
    cout<<ans<<endl;

}
