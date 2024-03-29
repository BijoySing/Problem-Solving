#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    while (cin >> s1 && cin >> s2) {
        int p = 0;

        for (int i = 0;i < s1.size();i++) {
            if (s1[i] == s2[p]) {
                p++;
            }
        }

        if (p == s2.size()) {
            cout << "Possible" << '\n';
        }
        else {
            cout << "Impossible" << '\n';
        }
    }
    return 0;
}