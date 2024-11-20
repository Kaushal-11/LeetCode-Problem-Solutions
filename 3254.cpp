#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n-k+1);
        for (int i = 0; i <= n-k; i++){
            bool flag = true;
            for (int j = i; j < i+k-1; j++){
                if(nums[j+1] != nums[j] + 1) {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans[i] = nums[i+k-1];
            else
                ans[i] = -1;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,2,3,2,3,2};
    int k = 2;
    vector<int> ans = s.resultsArray(nums, k);
    for(int x : ans)
        cout<<x<<" ";
    return 0;
}
