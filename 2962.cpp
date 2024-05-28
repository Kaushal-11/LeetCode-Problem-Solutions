#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        int maxi = INT_MIN;
        for (int x : nums)
        {
            maxi = max(maxi, x);
        }
        int i = 0, j = 0;
        int n = nums.size();
        long long ans = 0;
        int cnt = 0;
        while (j < n)
        {
            if (nums[j] == maxi)
            {
                cnt++;
            }
            while (cnt >= k)
            {
                ans += n - j;
                if (nums[i] == maxi)
                {
                    cnt--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 4, 2, 1};
    int k = 3;
    cout << s.countSubarrays(nums, k) << endl;
    return 0;
}