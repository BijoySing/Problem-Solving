#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> grid(15, vector<int>(15, 0));
int findcoin(int r, int c, int br, int b)
{
    if (r < 0)
        return 0;
    if (grid[r][c] == 2 and b == 0 and br > 5)
        return 0;
    int ans = 0;
    int coin = 0;
    ;
    if (grid[r][c] == 1)
        coin = 1;
    for (int i = -1; i <= 1; ++i)
    {
        int nc = c + i;
        if (nc < 0 || nc >= 5)
            continue;
        if (b == 0 || grid[r][c] == 2)
        {
            ans = max(ans, findcoin(r - 1, nc, br + 1, 0));
        }
        else
        {
            ans = max(ans, max(findcoin(r - 1, nc, br + 1, 0), findcoin(r - 1, nc, 1, 1)));
        }
    }
    return ans + coin;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> grid[i][j];
        }
    }
    int c = 2;
    int r = n - 1;
    int ans = 0;
    for (int i = -1; i <= 1; ++i)
    {
        ans = max(ans, findcoin(r, c + i, 1, 1));
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "#" << i + 1 << " ";
        solve();
    }
}