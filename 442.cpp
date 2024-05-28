#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        map<int, int> mp;
        for (int x : nums)
        {
            mp[x]++;
        }
        int cnt = 0;
        vector<int> ans;
        for (auto it = mp.begin(); it != mp.end();it++)
        {
            if (it->second > 1)
                ans.push_back(it->first);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> n = {2,4,1,2,3,4};
    vector<int> ans;
    ans = s.findDuplicates(n);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}