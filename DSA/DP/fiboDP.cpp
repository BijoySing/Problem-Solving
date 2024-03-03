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
int DP[N];
int fibo(int n)
{
    if (n == 1 || n==0)
        return n;
    if(DP[n]!=-1)return DP[n];    
    else
        return DP[n]=fibo(n-2)+ fibo(n - 1);

}
int32_t main()
{
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        memset(DP,-1,sizeof(DP));
        cout << fibo(n) << endl;
    }
}