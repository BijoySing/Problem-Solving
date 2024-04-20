#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        string s,ss="";
        cin >> s;
        set<char>d;
        map<char,int>mp;
        for(int i = 0; i <s.size(); i++) {
            d.insert(s[i]);
            mp[s[i]]++;

        }
        int c=0;
        for(auto [x,y]:mp){
            if(y>=2)c++;
        }
        if( d.size()>2 || (d.size()==2 and c==2))yes;
        else no;


    }
}
