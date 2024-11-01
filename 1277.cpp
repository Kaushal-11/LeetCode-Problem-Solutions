#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int sum = 0;
        vector<vector<int>> dp(m, vector<int> (n, 0));

        for (int i = 0; i < m; i++)
            dp[i][0] = matrix[i][0];
        
        for (int j = 0; j < n; j++)
            dp[0][j] = matrix[0][j];
        
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if(matrix[i][j] == 0)
                    dp[i][j] = 0;
                else
                    dp[i][j] = min({matrix[i-1][j], matrix[i-1][j-1], matrix[i][j-1]}) + 1;
            }            
        }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum += dp[i][j];
            }            
        }
        
        return sum;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1,0,1},{1,1,0},{1,1,0}};
    cout<<s.countSquares(matrix);
    return 0;
}
