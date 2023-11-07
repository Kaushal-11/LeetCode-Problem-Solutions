#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i = 1; i<=k; i++){
            ans.push_back(nums[nums.size() - 1]);
            nums[nums.size() - 1] += 1;
        }
        return accumulate(ans.begin(),ans.end(),0);       
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5};
    int k = 3;
    Solution s;
    s.maximizeSum(nums, k);

return 0;
}