#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = nums[i] - nums[j];
            bool flag = diff > 2*k;
            while(flag){
                j++;
                diff = nums[i] - nums[j];
                flag = diff > 2*k;
            }
            ans = max(ans, i-j+1);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,6,1,2};
    int k = 2;
    cout<<s.maximumBeauty(nums, k);
    return 0;
}
