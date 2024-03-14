#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int ans = 0, sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum == goal)
                ans++;
            if (i < n - 1)
            {
                for (int j = i + 1; j < n; j++)
                {
                    sum += nums[j];
                    if (sum == goal)
                        ans++;
                }
            }
            sum = 0;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    cout<<s.numSubarraysWithSum(nums,goal);
    return 0;
}