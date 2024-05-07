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

bool isSubstringPresent(string s)
{
    vector<string> v;
    for (int i = 0; i < s.size() - 1; i++)
    {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        v.pb(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        string s1 = v[i];
        reverse(s1.begin(), s1.end());
        for (int j = 0; j < v.size(); j++)
        {
            
            if (s1 == v[j])
                return true;
        }
    }
    return false;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isSubstringPresent(s))
            yes;
        else
            no;
    }
}
