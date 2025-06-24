#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define min2(a, b) (a) < (b) ? (a) : (b)
#define ep 1e-7

int a[200005];
int ans[100];

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int min = 1000000000, max = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] < min)
                min = a[i];
            if (a[i] > max)
                max = a[i];
        }
        int k = 0;
        for (k = 0; k <= 40; k++)
        {
            if (min == 0 && max == 0)
                break;
            int mid = (min + max) / 2;
            ans[k] = mid;
            min = 1000000000, max = 0;
            for (int i = 0; i < n; i++)
            {
                a[i] -= mid;
                if (a[i] < 0)
                    a[i] = -a[i];
                if (a[i] < min)
                    min = a[i];
                if (a[i] > max)
                    max = a[i];
            }
        }
        if (k == 41)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", k);
            for (int i = 0; i < k; i++)
            {
                printf("%d ", ans[i]);
            }
            printf("\n");
        }
    }
    return 0;
}