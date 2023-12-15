#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {3, 4, 5, 2};
    cout << s.maxProduct(nums);
    return 0;
}