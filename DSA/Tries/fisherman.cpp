#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int n;
int g[3];
int p[3];
int sum;
int ans = INT_MAX;

void solve(int ind, int val, int cnt)
{
    if (cnt == sum)
    {
        ans = min(ans, val);
        return;
    }
    if (ind == n + 1)
        return;
    for (int i = 0; i < 3; i++)
    {
        if (p[i] > 0)
        {
            p[i]--;
            solve(ind + 1, val + abs(g[i] - ind) + 1, cnt + 1);
            p[i]++;
        }
    }
    solve(ind + 1, val, cnt);
}

int main()
{
    cin >> n;
    for (int i = 0; i < 3; i++)
        cin >> g[i];
    for (int i = 0; i < 3; i++)
        cin >> p[i], sum += p[i];
    solve(1, 0, 0);
    cout << ans << endl;

    return 0;
}
