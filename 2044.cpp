#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxi = 0;
        vector<int> dp(1 << 17, 0);
        dp[0] = 1;

        for(int x : nums){
            for (int i = maxi; i >= 0; i--) {   
                dp[i | x] += dp[i];
            }
            maxi |= x;        
        }
        
        return dp[maxi];
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,2,1,5};
    cout<<s.countMaxOrSubsets(nums)<<endl;
    return 0;
}
