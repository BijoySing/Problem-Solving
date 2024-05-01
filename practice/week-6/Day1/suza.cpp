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
int binarySearch(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int ans = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return ans;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        vector<int> prefix(n);
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s += arr[i];
            prefix[i] = s;
        }

        while (q--)
        {
            int x;
            cin >> x;
            if(x==0){
                cout<<0<<" ";
                continue;
            }
            int id = binarySearch(arr, x);
            cout << prefix[id] << " ";
        }
        cout<<endl;
    }
}
