#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);
        for (int i = n - 1; i >= 2; i--)
        {
            if (nums[i] < sum)
                return sum + nums[i];
            else
                sum -= nums[i];
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {5, 5, 50};
    cout << s.largestPerimeter(nums) << endl;
    return 0;
}