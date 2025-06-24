#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int neq = 0;
        int s = 0;
        int mm = 1e6;
        int z = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
            s += abs(a[i]);
            if (a[i] < 0)
                neq++;
            mm = min(mm, abs(a[i]));
        }

        if (neq % 2)
        {
            s -= 2 * mm;
        }
        cout << s << endl;
    }

    return 0;
}
