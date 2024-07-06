#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<string> subzero;
        for (int i = 0; i < n; i++) {
            string temp = "";
            if (s[i] == '0') {
                while (i < n && s[i] == '0') {
                    temp += '0';
                    i++;
                }
            }
            if (temp != "")
                subzero.push_back(temp);
        }

        int z = count(s.begin(), s.end(), '0');
        if (z == n) {
            cout << (n + k) / (k + 1) << endl;
        } else {
            int ans = 0;
            if (!subzero.empty()) {
                // Handle the first gap if it starts from the beginning
                if (s[0] == '0') {
                    ans += subzero[0].size() / (k + 1);
                    subzero.erase(subzero.begin());
                }

                // Handle the last gap if it ends at the last position
                if (s[n - 1] == '0' && !subzero.empty() && subzero.back().size() == (n - 1 - s.find_last_not_of('0'))) {
                    ans += subzero.back().size() / (k + 1);
                    subzero.pop_back();
                }

                // Handle all the middle gaps
                for (auto& gap : subzero) {
                    if (gap.size() > k) {
                        ans += (gap.size() - k) / (k + 1);
                    }
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}
