#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
int binaryToDecimal(int binaryArray[], int size)
{
    int decimalNumber = 0;

    for (int i = 0; i < size; ++i)
    {
        decimalNumber = decimalNumber * 2 + binaryArray[i];
    }

    return decimalNumber;
}
const int N = 1e5 + 5;
int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bitset<32> x(n);
        int a[32];
        for (int i = 0; i < 32; ++i)
        {
            a[i] = x[31 - i];
        }
        // ck(a[31]);
        int ind = 0, id = 0;
        int ans = 0;
        for (int i = 0; i < 32; ++i)
        {
            // std::cout << a[i];
        }
        // cout << endl;

        for (int i = 0; i < 32; i++)
        {
            if (a[i] == 1)
            {
                ind = i;
                break;
            }
        }
        // ind = 32 - ind;
        // ck(ind);
        int c=0;
          for (int j = ind; j < 32; ++j)
        {
            if (a[j] == 0)
            {
              c++; 
            }
        }

        for (int j = ind; j < 32; ++j)
        {
            if (a[j] == 0)
            {
                a[j] = 1;
                id = j;
                break;
            }
        }

        // id = 32 - id;
        // ck(id);
        for (int i = id + 1; i < 32; i++)
        {
            a[i] = 0;
        }
        cout<<c<<endl;;
        int size = sizeof(a) / sizeof(a[0]);
        int num = binaryToDecimal(a, size);
        if(a[31]==1 || c==id)cout<<0<<endl;
        else cout << num - n << endl;

        // ind = 32 - ind;
        // ck(id);
        // int pw = ind - id;
        // ck(pw);
    }
}