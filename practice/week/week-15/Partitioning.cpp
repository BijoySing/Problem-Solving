#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long int
#define endl "\n"
#define pb push_back
#define pp(x) cout << x << endl
#define ck(x) cout << #x << " = " << x << endl;

vector<vector<string>> partition(string s)
{
    vector<vector<string>> res,ans;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            string temp = s.substr(i, j - i + 1);
            // cout << temp << endl;
            ans.push_back({temp});
        }
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++) {
        string s=ans[i][0];
        cout<<s<<endl;
    }

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<vector<string>> ans = partition(s);
    }
    return 0;
}