#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                s.insert(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
                i++;
            else
                j++;
        }

        vector<int> ans;
        for(auto i : s)
            ans.push_back(i);
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {1,2,3,1,5};
    vector<int> nums2 = {5,3,4};
    vector<int> ans = s.intersection(nums1,nums2);
    for(int x : ans)
        cout<<x<<" ";
    return 0;
}