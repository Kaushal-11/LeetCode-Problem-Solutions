#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        stack<int> indicesStack;

        for (int i = 0; i < n; i++) {
            if (indicesStack.empty() || nums[indicesStack.top()] > nums[i]) {
                indicesStack.push(i);
            }
        }

        int maxWidth = 0;

        for (int j = n - 1; j >= 0; j--) {
            while (!indicesStack.empty() && nums[indicesStack.top()] <= nums[j]) {
                maxWidth = max(maxWidth, j - indicesStack.top());
                indicesStack.pop();
            }
        }

        return maxWidth;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,4,0,2,1};
    cout<<s.maxWidthRamp(nums);
    return 0;
}
