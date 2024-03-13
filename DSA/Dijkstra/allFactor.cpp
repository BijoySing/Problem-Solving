#include "bits/stdc++.h"
using namespace std;

#define MAXN 100001

int spf[MAXN];

void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;

    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

vector<int> getFactors(int x)
{
    vector<int> factors;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

int main(int argc, char const* argv[])
{
    sieve();
    int x = 12246;
    cout << "factors of " << x << " : ";

    vector<int> factors = getFactors(x);

    for (int i = 0; i < factors.size(); i++)
        cout << factors[i] << " ";
    cout << endl;
    return 0;
}
