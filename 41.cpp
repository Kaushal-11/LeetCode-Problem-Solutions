#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (auto it : nums)
        {
            mp[it]++;
        }

        int small = 1;
        for (auto it : mp)
        {
            if (mp.find(small) == mp.end())
                return small;
            small++;
        }
        return small;
    }
};

int main()
{
    Solution s;
    vector<int> num = {1,2,0}; 
    cout<<s.firstMissingPositive(num);
    return 0;
}