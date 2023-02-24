#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pp(kharrtarrm) cout << kharrtarrm <<endl
#define int  long long
#define pb(kharrtarrm) push_back(kharrtarrm);
#define ck(kharrtarrm) cerr << #kharrtarrm << " = " << kharrtarrm << endl;
const int N=1000000000000L;
int wt[105],val[105];
int dp[105][100005];
int knapsack(int ind,int wt_left)
{

    if(wt_left==0 || ind<0)return 0;
    if(dp[ind][wt_left]!=-1)return dp[ind][wt_left];
    int ans=knapsack(ind-1,wt_left);
    if(wt_left-wt[ind]>=0)ans=max(ans,knapsack(ind-1,wt_left-wt[ind])+val[ind]);
    return dp[ind][wt_left]=ans;
}
int32_t main()
{
    int t=1;
    //  cin>>t;
    memset(dp,-1,sizeof(dp));
    while(t--)
    {

        int n,w;
        cin>>n>>w;
        for(int i=0; i<n; i++)
        {
            cin>>wt[i]>>val[i];
        }
        cout<<knapsack(n-1,w)<<endl;;

    }
}
