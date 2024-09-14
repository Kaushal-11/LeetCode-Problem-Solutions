#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int m = points[0].size();

        vector<vector<long long>> dp(n, vector<long long>(m, 0));
        for (int j = 0; j < m; ++j)
            dp[0][j] = points[0][j];

        for (int i = 1; i < n; ++i) {
            vector<long long> leftMax(m);
            leftMax[0] = dp[i - 1][0];
            for (int k = 1; k < m; ++k) {
                leftMax[k] = max(leftMax[k - 1], dp[i - 1][k] + k);
            }

            vector<long long> rightMax(m);
            rightMax[m - 1] = dp[i - 1][m - 1] - (m - 1);
            for (int k = m - 2; k >= 0; --k) {
                rightMax[k] = max(rightMax[k + 1], dp[i - 1][k] - k);
            }

            for (int j = 0; j < m; ++j) {
                dp[i][j] = points[i][j] + max(leftMax[j] - j, rightMax[j] + j);
            }
        }

        long long ans = 0;
        for (int j = 0; j < m; ++j)
            ans = max(ans, dp[n - 1][j]);

        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> points = {{1,2,3},{1,5,1},{3,1,1}};
    cout<<s.maxPoints(points)<<endl;
    return 0;
}
