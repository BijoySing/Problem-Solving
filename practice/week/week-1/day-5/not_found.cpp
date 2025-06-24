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
const int N = 1e5 + 5;

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
        char ch = 'a';
        sort(s.begin(), s.end());
        int ans = 0;
        set<char> ss;
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (s.find(i) == -1)
            {
                ch = i;
                ans = 1;
                break;
            }
        }

        ans ? cout << ch << endl : cout << "None\n";
    }
}
