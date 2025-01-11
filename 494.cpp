#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int cnt = 0;
    int findTargetSumWays(vector<int>& nums, int target) {
        calcWays(nums, 0, 0, target);
        return cnt;
    }

    void calcWays(vector<int>& nums, int index, int sum, int target) {
        if(index == nums.size()) {
            if(sum == target) 
                cnt++;
        }
        else{
            calcWays(nums, index+1, sum + nums[index], target);
            calcWays(nums, index+1, sum - nums[index], target);
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,1,1,1,1};
    int target = 3;
    cout<<s.findTargetSumWays(nums, target);
    return 0;
}
