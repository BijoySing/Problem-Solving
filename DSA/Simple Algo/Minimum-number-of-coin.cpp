
#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pp(kharrtarrm) cout << kharrtarrm <<endl
#define int  long long
#define pb(kharrtarrm) push_back(kharrtarrm);
#define ck(kharrtarrm) cerr << #kharrtarrm << " = " << kharrtarrm << endl;
const int N=1e4+5;
int dp[N];
int coinChange(int amount, vector<int>&coin)
{

    if(amount==0)return 0;
    if(dp[amount]!=-1)return dp[amount];
    int ans=INT_MAX;

    for(int m:coin)
    {
        if(amount-m>=0)
        {
            ans=min(ans+0LL,coinChange(amount-m,coin)+1LL);
           // ck(ans);
        }
    }
    return dp[amount]=ans;
}
int solve(vector<int>&v,int n)
{
        memset(dp,-1,sizeof(dp));

    int ans=coinChange(n,v);

    if(ans==INT_MAX)return -1;
    else return ans;
}

int32_t main()
{
    // memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n];
        vector<int>v= {2};
        /*for(int i=0; i<3; i++)
        {
            cin>>a[i];
           v.push_back(a[i]);
        }*/
        cout<< solve(v,n)<<endl;;


    }
}
