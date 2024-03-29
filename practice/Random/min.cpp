#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                c++;
        }
        if (k >= c)
        {
            int op = 0;
            for (int i = 0; i < k; i++)
            {
                size_t pos = s.find('1');
                if (pos != string::npos && s[pos] == '1')
                {
                    s.erase(pos, 1);
                    op++;
                }
            }
            for (int i = 0; i < k - op; i++)
            {
                size_t pos = s.find('0');
                if (pos != string::npos)
                {
                    s.erase(pos, 1);
                }
            }

            cout << s << endl;
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                size_t pos = s.find('1');
                if (pos != string::npos && s[pos] == '1')
                {
                    s[pos] = '0';
                }
            }
            cout << s << endl;
        }
    }
}
