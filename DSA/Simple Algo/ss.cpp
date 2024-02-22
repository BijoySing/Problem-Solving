#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Initializing variables.
    string s;
    cin >> s;
    int freq[26] = {0};
    
    //Calculating frequency of each character.
    for(int i = 0; i<s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    
    //Printing frequency of each character.
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
           cout<<"The frequency of "<<char(i + 97)<<" is "<<freq[i]<<endl;
        }
    }
    return 0;
}
