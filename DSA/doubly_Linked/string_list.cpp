#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
// #define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     { // this is constructor
//         this->val = val;
//         this->next = NULL;
//     }
// };

int main()
{
    int t = 1;
    // cin >> t;
    list<string> myList;

    while (t)
    {
        string s;
        cin >> s;
        if (s == "end")
            break;
        myList.push_back(s);
    }
    int q;
    cin >> q;
    while (q--)
    {

        string s;
        cin >> s;
        auto f = myList.begin();
        if (s == "visit")
        {
            string c;
            cin >> c;
            f = find(myList.begin(), myList.end(), c);
            if (*f == c)
                cout << c << endl;
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (s == "next")
        {
            if (next(f) != myList.end())
            {
                auto nxt = next(f);
                if (nxt != myList.end())
                    cout << *nxt << endl;
                else
                    cout << "Not Available" << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (s == "prev")
        {
            f=(next(f));
            if (f != myList.begin())
            {
                auto pre = *(f);
                cout << pre << endl;
                //  f=pre;
                f--;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}