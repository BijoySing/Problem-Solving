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
// int fibo(int n)
// {
//     if (n == 1 || n==0)
//         return n;
//     else
//         return fibo(n-2)+ fibo(n - 1);

// }
int32_t main()
{
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int fib[n + 4];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            // Your code here
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout<<fib[n];
    }
}