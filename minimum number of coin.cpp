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
    table[0]=0;
    for(int i=1;i<=amount;i++)table[i]=INT_MAX;

    for(int i=0; i<=amount; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(coin[j]<=i){
                int res=table[i-coin[j]];
                if(res!=INT_MAX && res+1<table[i]){
                    table[i]=res+1;
                }

        }
    }}
    if(table[amount]==INT_MAX)cout<<"Not Possible"<<endl;
    cout<<"minimum Number of coin needed : "<<table[amount]<<endl;
}
