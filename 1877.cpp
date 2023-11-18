#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = INT_MIN;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size()/2; i++)
        {
            int sum = nums[i] + nums[nums.size()-i-1];
            ans = max(ans, sum);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,5,4,2,4,6};
    cout<<s.minPairSum(nums);
return 0;
}