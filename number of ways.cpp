/**
author:  Bijoy Singh Rajput
**/
#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pp(khatam) cout << khatam <<endl
#define int  long long
#define pb(khatam) push_back(khatam)
#define ck(khatam) cerr << #khatam << " = " << khatam << endl;
int32_t main()
{
    int amount,n;
    cout<<"inter number of coin: ";
    cin>>n;
    cout<<"coin are: ";
    int coin[n];

    for(int i=0; i<n; i++)
    {
        cin>>coin[i];
    }
    cout<<"How much amount you make: ";
    cin>>amount;
    int table[amount+1];
    memset(table,0,sizeof(table));
    int ans;
    table[0]=1;
    for(int i=0; i<n; i++)
    {
        for(int j=coin[i]; j<=amount; j++)
        {
            table[j]+=table[j-coin[i]];
        }
    }
    cout<<"Number of ways : "<<table[amount]<<endl;
}
