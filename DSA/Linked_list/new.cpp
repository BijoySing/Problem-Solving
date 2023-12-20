#include <iostream>
#include <string>

std::string generateUsername(const std::string &s)
{
    std::string username = "";
    bool numericPartFound = false;

    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i] ))
        {
            numericPartFound = true;
            username += s[i];
        }
        else if (numericPartFound)
        {
            break;
        }
        else
        {
            username += s[i];
        }
    }

    return username;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        std::string s;
        std::cin >> s;
        std::string username = generateUsername(s);
        std::cout << username << std::endl;
    }

    return 0;
}
