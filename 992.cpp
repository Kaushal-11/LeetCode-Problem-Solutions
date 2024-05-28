#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int maximumArray(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int n = nums.size();
        int i = 0, j = 0;
        int cnt = 0;

        while (j < n)
        {
            mp[nums[j]]++;
            while (mp.size() > k)
            {
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                {
                    mp.erase(nums[i]);
                }
                i++;
            }
            cnt += (j - i + 1);
            j++;
        }
        return cnt;
    }

public:
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return maximumArray(nums, k) - maximumArray(nums, k - 1);
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,2,1,2,3}; 
    int k = 2;
    cout<<s.subarraysWithKDistinct(nums,k);
    return 0;
}