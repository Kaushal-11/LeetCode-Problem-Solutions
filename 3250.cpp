#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOfPairs(vector<int>& nums) {
        const int MOD = 1'000'000'007;
        int n = nums.size();
        int maxVal = 50;
        
        vector<vector<int>> dp(maxVal + 1, vector<int>(maxVal + 1, 0));
        vector<vector<int>> prefixSum(maxVal + 1, vector<int>(maxVal + 1, 0));
        
        for (int x = 0; x <= nums[0]; x++) {
            int y = nums[0] - x;
            if (y >= 0 && y <= maxVal) {
                dp[x][y] = 1;
            }
        }
        
        for (int x = 0; x <= maxVal; x++) {
            for (int y = 0; y <= maxVal; y++) {
                prefixSum[x][y] = dp[x][y];
                if (x > 0) prefixSum[x][y] = (prefixSum[x][y] + prefixSum[x - 1][y]) % MOD;
                if (y > 0) prefixSum[x][y] = (prefixSum[x][y] + prefixSum[x][y - 1]) % MOD;
                if (x > 0 && y > 0) prefixSum[x][y] = (prefixSum[x][y] - prefixSum[x - 1][y - 1] + MOD) % MOD;
            }
        }

        for (int i = 1; i < n; i++) {
            vector<vector<int>> newDp(maxVal + 1, vector<int>(maxVal + 1, 0));
            vector<vector<int>> newPrefixSum(maxVal + 1, vector<int>(maxVal + 1, 0));
            for (int x = 0; x <= nums[i]; x++) {
                int y = nums[i] - x;
                if (y < 0 || y > maxVal) continue;
                int prevSum = prefixSum[x][maxVal];
                if (y > 0) prevSum = (prevSum - prefixSum[x][y - 1] + MOD) % MOD;
                
                newDp[x][y] = prevSum % MOD;
            }
            for (int x = 0; x <= maxVal; x++) {
                for (int y = 0; y <= maxVal; y++) {
                    newPrefixSum[x][y] = newDp[x][y];
                    if (x > 0) newPrefixSum[x][y] = (newPrefixSum[x][y] + newPrefixSum[x - 1][y]) % MOD;
                    if (y > 0) newPrefixSum[x][y] = (newPrefixSum[x][y] + newPrefixSum[x][y - 1]) % MOD;
                    if (x > 0 && y > 0) newPrefixSum[x][y] = (newPrefixSum[x][y] - newPrefixSum[x - 1][y - 1] + MOD) % MOD;
                }
            }
            dp = move(newDp);
            prefixSum = move(newPrefixSum);
        }

        int totalCount = 0;
        for (int x = 0; x <= maxVal; x++) {
            for (int y = 0; y <= maxVal; y++) {
                totalCount = (totalCount + dp[x][y]) % MOD;
            }
        }
        return totalCount;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {5,5,5,5};
    cout << s.countOfPairs(nums) << endl;
    return 0;
}