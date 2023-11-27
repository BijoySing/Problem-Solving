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
int knapsack(int ind,int val_left)
{

    if(val_left==0)return 0;
    if(ind<0)return 1e15;
    if(dp[ind][val_left]!=-1)return dp[ind][val_left];
    int ans=knapsack(ind-1,val_left);
    if(val_left-val[ind]>=0)ans=min(ans,knapsack(ind-1,val_left-val[ind])+wt[ind]);
    return dp[ind][val_left]=ans;
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
        int mx=1e5;
        for(int i=mx; i>=0; i--)
        {

            if(knapsack(n-1,i)<=w)
            {
                cout<<i<<endl;
                break;
            }

        }
    }
}
