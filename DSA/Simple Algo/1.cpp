#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)
string dectobin(int a)
{
    string s = "";
    while (a > 0)
    {
        s += to_string(a % 2);
        a /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
int bintodec(string s)
{
    int ans = 0;
    int j = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        ans += (s[i] - '0') * pow(2, j);
        j++;
    }
    return ans;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n = 3;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string a1=dectobin(a[0]);
        string a2=dectobin(a[1]);
        string a3=dectobin(a[2]);
        string s1=a1+a2+a3;
        string s2=a1+a3+a2;
        string s3=a2+a1+a3;
        string s4=a2+a3+a1;
        string s5=a3+a1+a2;
        string s6=a3+a2+a1;
        int ans=0;
        // cout<<s1<<endl;
        // cout<<s2<<endl;
        // cout<<s3<<endl;
        // cout<<s4<<endl;
        // cout<<s5<<endl;
        // cout<<s6<<endl;
        ans=max(ans,bintodec(s1));
        ans=max(ans,bintodec(s2));
        ans=max(ans,bintodec(s3));
        ans=max(ans,bintodec(s4));
        ans=max(ans,bintodec(s5));
        ans=max(ans,bintodec(s6));
        cout<<ans<<endl;



    }
}
