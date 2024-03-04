#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
const int N = 1e5 + 5;
const int maxN = 1000;
const int maxW = 1000;
ll dp[maxN][maxW];
bool make(int cur, ll n)
{
    priority_queue<int> q;
    q.push(cur);
    if (cur == n)
        return true;
    while (!q.empty())
    {
        int a = q.top() * 2;
        int b = q.top() + 3;
        q.pop();
        q.push(a);
        q.push(b);
        if (a == n || b == n)
            return true;
        if (a > n and b > n){
            return false;
        }
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;

        cin >> n;
        if (make(1, n))
            yes;
        else
            no;

    }
}