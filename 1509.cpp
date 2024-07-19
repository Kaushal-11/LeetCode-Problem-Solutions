#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size() <= 4)
            return 0;

        sort(nums.begin(), nums.end());
        int l = -1, r = nums.size()-3;
        int i = 0;
        int ans = INT_MAX;
        while(i < 4){
            ans = min(ans, nums[r-1]-nums[l+1]);
            l++; r++;
            i++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {5,3,2,4};
    cout<<s.minDifference(nums)<<endl;
return 0;
}   