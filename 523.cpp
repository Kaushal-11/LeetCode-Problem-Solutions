#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        int sum = 0;
        mp[0].push_back(-1);
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            sum %= k;
            if(mp.count(sum) && i > mp[sum].front()+1)
                return 1;
            mp[sum].push_back(i);
        }
        return 0;
    }
};

int main() {
    Solution s;
    vector<int> nums = {23,2,4,6,7};
    int k = 6;
    cout<<s.checkSubarraySum(nums, k)<<endl;
return 0;
}   