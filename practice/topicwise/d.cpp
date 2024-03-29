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
string revers(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = to_string(n), ss = "";
        int id;
        int sz = s.size();
        bool flag = true;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {

                id = i;

                break;
            }
        }
        for (int i = 0; i <= id; i++)
        {
            ss += s[i];
        }
        for (int i = 0; i < sz; i++)
        {
            if (s[i] == '1' || s[i] == '0')
                continue;
            else
                flag = false;
        }
        string rev;
        rev = revers(ss);

        // cout << rev << " " << ss << endl;
        if (flag)
            yes;
        else if (rev == ss){
            
        }
            yes;
        else
            no;
    }
}
