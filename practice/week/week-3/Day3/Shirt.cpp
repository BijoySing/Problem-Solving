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
        cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();
        if (s1 == s2)
            cout << "=" << endl;
        else if (n == m)
        {
            if (s1[n - 1] > s2[m - 1])
                cout << '<' << endl;
            else
                cout << '>' << endl;
        }
        else
        {
            if (s1[n - 1] == s2[m - 1])
            {
                if (s1[n - 1] == 'S')
                    if (n < m)
                    {

                        cout << '>' << endl;
                    }
                    else
                        cout << '<' << endl;
                else
                {
                     if (n < m)
                    {

                        cout << '<' << endl;
                    }
                    else
                        cout << '>' << endl;
                }
            }
            else if (s1[n - 1] > s2[m - 1])
                cout << '<' << endl;

            else
                cout << '>' << endl;
        }
    }
}
