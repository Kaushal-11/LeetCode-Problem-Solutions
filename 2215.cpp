#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<vector<int>> v(2);
        unordered_set<int> n1(nums1.begin(), nums1.end());
        unordered_set<int> n2(nums2.begin(), nums2.end());
        for (auto it : n1)
        {
            if(n2.find(it) == n2.end()){
                v[0].push_back(it);
            }
        }

        for (auto it : n2)
        {
            if(n1.find(it) == n1.end()){
                v[1].push_back(it);
            }
        }
        return v;
    }
};

int main()
{

    return 0;
}