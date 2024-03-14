#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(vector<int> v, int index, set<vector<int>>& ans)
    {
        if (index >= v.size())
        {
            ans.insert(v);
            return;
        }
        for (int i = 0; i < v.size(); i++)
        {
            swap(v[i], v[index]);
            solve(v, index + 1, ans);
            swap(v[i], v[index]);
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        set<vector<int>> s;
        solve(nums, 0, s);
        vector<vector<int>> ans(s.begin(), s.end());
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,1,3};
    vector<vector<int>> ans = s.permuteUnique(nums);
    for(auto it : ans){
        for(auto x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}