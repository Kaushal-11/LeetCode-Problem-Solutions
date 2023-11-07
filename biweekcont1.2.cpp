#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countOperationsToEmptyArray(vector<int> &nums)
    {
        long long i = 0;
        set<int> s(nums.begin(), nums.end());
        while (nums.size() > 0)
        {
            if (*s.begin() == nums.front())
            {
                s.erase(s.begin());
                nums.erase(nums.begin());
            }
            else
            {
                int x = nums.front();
                nums.erase(nums.begin());
                nums.push_back(x);
            }
            i++;
        }
        return i;
   }
};