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
int fib(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    return dp[n]= fib(n-1)+fib(n-2);
}
int32_t main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    pp(fib(n));

}
