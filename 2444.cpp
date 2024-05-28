#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        int i = 0;
        long long cnt = 0;
        int flag1 = -1, flag2 = -1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] >= minK && nums[j] <= maxK)
            {
                if (nums[j] == minK)
                {
                    flag1 = j;
                }
                if (nums[j] == maxK)
                {
                    flag2 = j;
                }
                if (flag1 != -1 && flag2 != -1)
                {
                    cnt += min(flag1, flag2) - i + 1;
                }
            }
            else
            {
                i = j + 1;
                flag1 = -1;
                flag2 = -1;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 3, 5, 2, 7, 5};
    int minK = 1 , maxK = 5;
    cout<<s.countSubarrays(nums, minK, maxK);
    return 0;
}