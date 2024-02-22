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
    cin >> t;
    list<int> myList;

    while (t--)
    {
        // Node *head = NULL;
        int pos, val;
        cin >> pos >> val;
        if (myList.size() > 0)
            myList.reverse();

        if (pos == 0)
        {

            myList.push_front(val);
            cout << "L -> ";
            for (auto u : myList)
                cout << u << " ";
            myList.reverse();
            cout << endl;
            cout << "R -> ";
            for (auto u : myList)
                cout << u << " ";
        }
        else if (pos == 1)
        {
            myList.push_back(val);
            cout << "L -> ";
            for (auto u : myList)
                cout << u << " ";
            myList.reverse();
            cout << endl;
            cout << "R -> ";
            for (auto u : myList)
                cout << u << " ";
        }

        else
        {
            if (val < myList.size())
            {
                myList.erase(next(myList.begin(), val));
            }
            cout << "L -> ";
            for (auto u : myList)
                cout << u << " ";
            myList.reverse();
            cout << endl;
            cout << "R -> ";
            for (auto u : myList)
                cout << u << " ";
        }
        cout << endl;
    }
    // myList.sort();
    // myList.unique();
    // for (auto u : myList)
    //     cout << u << " ";
}