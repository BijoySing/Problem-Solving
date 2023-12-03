/**
author: Bijoy Singh Rajput
 "Nam Tho Sunahi Hoga"
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define ii int
#define pb push_back
#define ck(x) cout << #x << " = " << x << endl;

void concate(int b[],int a[],int n)
{
    vector<int>v;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        v.pb(b[i]);
    } for (size_t i = 0; i < n; i++)
    {
        /* code */
        v.pb(a[i]);
    }
    for(int x:v)cout<<x<<" ";

}
int32_t main()
{
    // Your code here
int n;
cin>>n;
int a[n];
int b[n];
for (size_t i = 0; i < n; i++)
{
    /* code */
    cin>>a[i];
}
for (size_t i = 0; i < n; i++)
{
    /* code */
    cin>>b[i];
}
concate(b,a,n);

}