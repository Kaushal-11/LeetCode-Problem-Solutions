#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        int ans = 0;
        for (auto it : mp)
        {
            if (it.second > floor(n/2)){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<s.majorityElement(nums)<<endl;
    return 0;
}