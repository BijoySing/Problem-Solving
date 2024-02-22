#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
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

int32_t main()
{
    int t = 1;
    list<int> myList;

    while (t)
    {
        // Node *head = NULL;
        int val;
        cin >> val;
        if (val == -1)
            break;
        myList.push_back(val);
    }
    myList.sort();
    myList.unique();
    for (auto u : myList)
        cout << u << " ";
}