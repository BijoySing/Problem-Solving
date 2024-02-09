#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
// #define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;

int main()
{
    int t;
    cin >> t;
    vector<pair<string, int>> v;
    while (t--)
    {
        string s;
        int c;
        cin >> s >> c;
        c=(-1)*c;
        v.push_back(make_pair(s, c));
    }
    sort(v.begin(), v.end());

    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     if (v[i].first == v[i + 1].first)
    //     {
    //         swap(v[i].second, v[i + 1].second);
    //     }
    // }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " <<(-1)* v[i].second << endl;
    }
    return 0;
}
