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
string s;
cin>>s;
int a[26]={0};
// sort(s.begin(),s.end());
for (int i = 0; i < s.size(); i++)
{
    /* code */
    a[s[i]-'a']++;
}
for (int i = 0; i < 26; i++)
{
    /* code */
    if(a[i]!=0){
        cout<<char(i+97)<<" : "<<a[i]<<endl;
    }
}

}