#include <iostream>
using namespace std;

class Trie
{
    Trie *children[26];
    bool isEnd;

public:
    Trie()
    {
        isEnd = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }

    void insert(string word)
    {
        Trie *node = this;
        for (auto c : word)
        {
            int index = c - 'a';
            if (node->children[index] == nullptr)
                node->children[index] = new Trie();
            node = node->children[index];
        }
       node->isEnd = true;
    }

    bool search(string word)
    {
        Trie *node = this;
        for (auto c : word)
        {
            int index = c - 'a';
            if (node->children[index] == nullptr)
                return false;
            node = node->children[index];
        }
        return node->isEnd;
    }

    bool startsWith(string prefix)
    {
        Trie *node = this;
        for (auto c : prefix)
        {
            int index = c - 'a';
            if (node->children[index] == nullptr)
                return false;
            node = node->children[index];
        }
        return true;
    }
};

int main()
{
    Trie trie;
    trie.insert("apple");
    cout << trie.search("apple") << endl;   // 1 (true)
    cout << trie.search("app") << endl;     // 0 (false)
    cout << trie.startsWith("app") << endl; // 1 (true)
    trie.insert("app");
    cout << trie.search("app") << endl; // 1 (true)
}
