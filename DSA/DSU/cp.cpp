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
int32_t main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    int n, a, b;
    cin >> n;
    int w[n];
    vector<int> v, x, y;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      // Your code here
      cin >> w[i];
      v.push_back(w[i]);
      sum += w[i];
    }
    
    cout<<sum<<endl;
    sort(w,w+n);
    if(sum%2 || w[n-1]>sum/2)no;
    else yes;
    }
}