/**
author:  Bijoy Singh Rajput
 " Nam Tho Sunahi Hoga "
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[500][10001];
int func(int ind,int amount,vector<int>&v)
{

    if(amount==0)return 1;
    if(ind<0)return 0;
    if(dp[ind][amount]!=-1)return dp[ind][amount];
    int ways=0;
    for(int coin_amount=0; coin_amount<=amount; coin_amount+=v[ind])
    {
        ways+=func(ind-1,amount-coin_amount,v);
    }
    return dp[ind][amount]=ways;
}
int change(int amount,vector<int>&v)
{
    memset(dp,-1,sizeof(dp));
    return func(v.size()-1,amount,v);

}

int main()
{
    vector<int>v= {1,2,5};
    int n;
    cin>>n;
    cout<<change(n,v)<<endl;
}

