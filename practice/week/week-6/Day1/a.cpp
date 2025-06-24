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
        int n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        int a[n + 4];
        int p[n + 4];
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int curb = a[pb], curs = a[ps];
        int Bodya = a[pb], Sasha = a[ps];
        int nextb = p[pb];
        int nexts = p[ps];
        int prevs = curs;
        int prevb = curb;
        int longb = a[pb];
        int longs = a[ps];
        for (int i = 1; i < min(n, k); i++)
        {

            // cout << prevs << " " << Sasha << " " << nexts << endl;

            if (a[nexts] > prevs)
            {
                prevs = a[nexts];
                longs += (k - i ) * (a[nexts]);
                Sasha += a[nexts];
                nexts = p[nexts];
            }
            else
            {
                Sasha += (prevs);
                longs += (prevs) * (k - i);
            }
            // cout << prevb << " " << Bodya << " " << nextb << endl;
            if (a[nextb] > prevb)
            {
                prevb = a[nextb];
                // Bodya += a[nextb];
                Bodya += (a[nextb]);
                longb += (a[nextb]) * (k - i );

                nextb = p[nextb];
            }
            else
            {
                Bodya += (prevb);
                longb += (prevb) * (k - i );
            }
        }
        // ck(Bodya);/
        // ck(longb);
        // ck(longs);
        if (k > n and k > 2*10 ^ 5)
        {
            if (longb > longs)
                cout << "Bodya";
            else if (longb == longs)
                cout << "Draw";
            else
                cout << "Sasha";
            cout << endl;
        }
        else
        {

            if (Bodya > Sasha)
                cout << "Bodya";
            else if (Bodya == Sasha)
                cout << "DRAW";
            else
                cout << "Sasha";
            cout << endl;
        }
    }
}
