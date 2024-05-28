#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubarrayLength(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int i = 0, j = 0;
        int n = nums.size();
        int ans = 0;
        while (j < n)
        {
            mp[nums[j]]++;
            while (i <= j && mp[nums[j]] > k)
            {
                mp[nums[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 1, 2, 3, 1, 2};
    int k = 2;
    cout<<s.maxSubarrayLength(nums,k);
    return 0;
}