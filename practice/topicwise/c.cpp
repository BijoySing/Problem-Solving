#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cerr << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)
void has()
{
    for (int i = 0; i < 2; i++)
    {
        cout << endl;
    }
}
void dot()
{

    for (int i = 0; i < 2; i++)
    {

        cout << endl;
    }
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
        string h = "##";
        string d = "..";

        for (int i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2)
                        cout << h;
                    else
                        cout << d;
                }
                cout << endl;
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2)
                        cout << h;
                    else
                        cout << d;
                }
                cout << endl;
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2)
                        cout << d;
                    else
                        cout << h;
                }
                cout << endl;
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2)
                        cout << d;
                    else
                        cout << h;
                }
                cout << endl;
            }
        }
    }
}
