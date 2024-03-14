#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<int> &nums, vector<vector<int>> &ans, int index)
    {
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);
            swap(nums[index], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums,ans,index);
        return ans;
    }
};

int main()
{   
    Solution s;
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = s.permute(nums);
    for(auto it : ans){
        for(auto x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}