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
#define ck(x) cout << #x << " = " << x << endl;
int32_t main()
{
    // Your code here
int n,q;
cin>>n>>q;
int a[n];
vector<int>v={0};
for (size_t i = 0; i < n; i++)
{
    /* code */
    cin>>a[i];
    v[a[i]]=1;

}
for (size_t i = 0; i < q; i++)
{
    /* code */
    int x;
    cin>>x;
    cout<<v[x]<<endl;
    if(v[x])cout<<"found"<<endl;
    else cout<<"not found"<<endl;
}


}