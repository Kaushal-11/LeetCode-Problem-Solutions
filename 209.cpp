#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j = 0 , sum = 0;
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            while (sum >= target){
                mini = min(mini, i - j + 1);
                sum -= nums[j++];
            }
        }
        if(mini == INT_MAX){
            return 0;
        }
        return mini;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    cout<<s.minSubArrayLen(target, nums)<<endl;
return 0;
}