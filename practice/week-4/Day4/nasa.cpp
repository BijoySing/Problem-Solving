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
vector<int> v;
const int N = (1 << 15);

void mk()
{
    for (int i = 0; i < N; i++)
    {
        string s, rs;
        s = to_string(i);
        rs = s;
        reverse(s.begin(), s.end());
        if (s == rs)
            v.push_back(i);
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    mk();

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(N);
        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        int ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                int curr = (a[i] ^ v[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << endl;;
    }
}
