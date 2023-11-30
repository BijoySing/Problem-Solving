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
int n;
cin>>n;
int a[n];
for (size_t i = 0; i < n; i++)
{
    /* code */
    cin>>a[i];
}
int c=0;
for (size_t i = 0; i < n; i++)
{
    for (size_t j = 0; j < n; j++)
    {
        /* code */
            if(a[i]+1==a[j] and a[i])c++;

    }
    
    /* code */
}
cout<<c<<endl;

}