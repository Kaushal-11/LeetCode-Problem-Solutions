#include<bits/stdc++.h>
using namespace std;

    class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> temp = nums;
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if(nums[i-1] >= nums[i])
                nums[i] = nums[i-1] + 1;
        }

        for (int i = 0; i < n; i++)
            cnt += abs(nums[i] - temp[i]);
        
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,2,1,2,1,7};
    cout<<s.minIncrementForUnique(nums)<<endl;
return 0;
}   