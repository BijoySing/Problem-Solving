#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
int32_t main()
{
    int t = 1;
    cin >> t;
    cin.ignore(); // Consume newline character

    while (t--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        int mx = 0;
        string ans;
        auto x = 1;
        while (ss >> word)
        {
            x = mp[word]++;
            int c = x + 1;
            // cout << word << " " << ++x << endl;
            if (mx < c)
            {
                mx = c;
                ans = word;
            }
        }

        cout << ans << " " << mx << endl;
    }
}