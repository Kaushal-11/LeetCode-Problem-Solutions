#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        while (k--) {
            int minIndex = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i] < nums[minIndex]) {
                    minIndex = i;
                }
            }
            nums[minIndex] *= multiplier;
        }
        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,1,3,5,6};
    int k = 5, multi = 2;
    vector<int> ans = s.getFinalState(nums, k, multi);
    for(int x : ans)
        cout<<x<<" ";
    return 0;
}
