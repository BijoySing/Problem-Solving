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
int ok[N];

void make()
{
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(1);
    ok[1] = 1;
    while (!q.empty())
    {
        int a = q.top() * 2;
        int b = q.top() + 3;
        q.pop();
        if (a < N and ok[a] == 0)
        {
            q.push(a);
            ok[a] = 1;
        }

        if (b < N and ok[b] == 0)
        {
            q.push(b);
            ok[b] = 1;
        }
    }
}

int32_t main()
{

    int t = 1;

    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 4)
            cout << s << endl;
        else
        {
            for (int i = 0; i < 4 - s.size(); i++)
            {
                cout << 0;
            }
            cout << s << endl;
        }
    }
}