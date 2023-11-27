#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    s += "  "; 

    stringstream ss(s);
    string sss;
    int f=0;

    while (ss >> sss) {
        if (sss == "Jessica") {
            f = 1;;
            break;
        }
    }

    if (f) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
