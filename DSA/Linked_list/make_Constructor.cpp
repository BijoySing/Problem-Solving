#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;

class Node{
    public:
        int val;
        Node* next;   
    Node(int val){//this is constructor
        this->val=val;
        this->next=NULL;
   

    }
    

};

int32_t main()
{
    int t = 1;
    while (t--) {
        Node a(10),b(50);
        
      
        a.next=&b;
        b.next=NULL;
        cout<<a.val<<endl;
        cout<<b.val<<endl;
        cout<<a.next->val<<endl;
    }
}