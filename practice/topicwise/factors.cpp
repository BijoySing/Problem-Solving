#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)

bool isBinary(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0 && digit != 1)
            return false;
        n /= 10;
    }
    return true;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (isBinary(n))
            yes;
        else
        {

            vector<int> v = {1, 10, 11, 100, 101, 110, 111, 121, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 1210, 1221, 1331, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 10201, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 11121, 11211, 12100, 12111, 12210, 12221, 12321, 13310, 13431, 14641, 100000};

            bool check = false;

            for (auto x : v)
            {

                if (n == x)
                {
                    check = true;
                    break;
                }
            }

            if (check)
            {
                yes;
            }
            else
            {
                no;
            }
        }
        // Print factors for this specific test case
        // for (int factor : factors) {
        //     cout << factor << " ";
        // }
        // cout << endl;
    }
}
