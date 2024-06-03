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

int changeBinaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        string Binary;
        cin >> Binary;
        int n = changeBinaryToDecimal(Binary);
        // ck(n);
        if (n ==0)
        {
            cout << 0 << endl;
        }
        else if (n == 1 || n == 2 || n == 4 || n == 8)
        {
            cout << 11 << endl;
        }
        else if (n == 3 || n == 12)
        {
            cout << 21 << endl;
        }
        else if (n == 7 || n == 14 || n == 11 || n == 13)
        {
            cout << 231 << endl;
        }
        else if (n == 5 || n == 6 || n == 9 || n == 10)
        {
            cout << 121 << endl;
        }
        else
        {
            cout << 441 << endl;
        }
    }
}