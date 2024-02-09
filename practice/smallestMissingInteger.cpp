#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
// #define int long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;

int smallestMissingInteger(std::vector<int> nums)
{
    int n = nums.size();
    vector<int> v;
    std::vector<std::pair<int, int>> p;

    // sort(nums.begin(), nums.end());
    int x = 1;
    int sum = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        // ck(nums[i]);
        // ck(nums[i+1]);
        // cout<<nums[i]<<" ";
        if (nums[i] <= nums[i + 1] + 1)
        {
            
            x++;
            sum += nums[i];
            // ck(sum);
            // sum += nums[i]+nums[i+1];
        }
        else
        {
            // v.push_back(sum);
            
            sum+=nums[i];
            p.push_back({x, sum});
            cout<<x<<" "<<sum<<endl;

            sum = 0;
            x = 0;
        }
        // cout<<endl;
    }

    // Push the last pair
    p.push_back({x, sum});

    for (const auto &pair : p)
    {
        std::cout << "Pair: " << pair.first << " --- " << pair.second << std::endl;
    }

    return 1;
}

int main()
{
    int size;
    std::cin >> size;

    std::vector<int> nums(size);
    for (int i = 0; i < size; ++i)
    {
        std::cin >> nums[i];
    }

    int result = smallestMissingInteger(nums);

    std::cout << "The smallest missing integer is: " << result << std::endl;

    return 0;
}
