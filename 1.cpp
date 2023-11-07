#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> num = {3, 2, 4};
    int target = 6;
    Solution obj;
    vector<int> ans = obj.twoSum(num, target);
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}