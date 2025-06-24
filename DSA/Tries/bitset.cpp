#include <iostream>
#include <bitset>
using namespace std;

int countDuplicateCharacters(string s)
{
    bitset<26> seen;
    bitset<26> duplicate;
    int count = 0;

    for (char c : s)
    {
        int index = c - 'a';
        if (seen[index])
        {
             if(!duplicate[index])
            {
                 duplicate.set(index);
                count++;
                // cout << "Character '" << c << "' appears more than once." << endl;
            }
        }
        else
        {
            seen.set(index);
        }
    }
    return count;
}

int main()
{
    string s;
    cin >> s;
    cout << "Number of     more than once: " << countDuplicateCharacters(s) << endl;
    return 0;
}
