#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        map<int, int> mp;
        int maxi = INT_MIN;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            maxi = max(maxi, mp[nums[i]]);
        }

        for (auto it : nums)
        {
            if (mp[it] == maxi)
                ans++;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 2, 3, 1, 4};
    cout<<s.maxFrequencyElements(nums);
    return 0;
}