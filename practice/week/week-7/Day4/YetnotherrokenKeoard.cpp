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
        string s1, s2;
        cin >> s1;
        ll i, n = s1.size(), count_b = 0, count_B = 0;
        for (i = n - 1; i >= 0; i--)
        {
            if (s1[i] == 'b')
                count_b++;
            else if (s1[i] == 'B')
                count_B++;
            else
            {
                if (s1[i] >= 'a' && s1[i] <= 'z')
                {
                    if (count_b)
                        count_b--;

                    else
                        s2.push_back(s1[i]);
                }
                else if (s1[i] >= 'A' && s1[i] <= 'Z')
                {
                    if (count_B)
                        count_B--;
                    else
                        s2.push_back(s1[i]);
                }
            }
        }
        reverse(s2.begin(), s2.end());
        cout << s2 << endl;
    }
}
