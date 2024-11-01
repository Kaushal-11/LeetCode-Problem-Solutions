#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++)
            dp[i][0] = 1;
        
        int cnt = 0;
        for (int j = 1; j < n; j++)
        {
            for (int i = 0; i < m; i++)
            {
                if(grid[i][j] > grid[i][j-1] && dp[i][j-1] > 0){
                    dp[i][j] = max(dp[i][j], dp[i][j-1] + 1);   
                }
                if (i-1 >= 0 && grid[i][j] > grid[i-1][j-1] && dp[i-1][j-1] > 0) {
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
                }
                if (i+1 < m && grid[i][j] > grid[i+1][j-1] && dp[i+1][j-1] > 0) {
                    dp[i][j] = max(dp[i][j], dp[i+1][j-1] + 1);
                }

                cnt = max(cnt, dp[i][j]-1);
            }            
        }        
        return cnt;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{2,4,3,5},{5,4,9,3},{3,4,2,1},{10,9,1315}};
    cout<<s.maxMoves(grid)<<endl;
    return 0;
}
