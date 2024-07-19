#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size();

        vector<vector<int>> horizontal(m + 1, vector<int>(n + 1, 0));
        vector<vector<int>> vertical(m + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 'X') {
                    horizontal[i+1][j+1]++;
                } else if (grid[i][j] == 'Y') {
                    vertical[i+1][j+1]++;
                }
            }
        }
        
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                horizontal[i][j] += horizontal[i-1][j] + horizontal[i][j-1] - horizontal[i-1][j-1];
                vertical[i][j] += vertical[i-1][j] + vertical[i][j-1] - vertical[i-1][j-1];
            }
        }
        
        int cnt = 0;
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                int x = horizontal[i][j];
                int y = vertical[i][j];
                if (x == y && x > 0) 
                    cnt++;
            }
        }
        
        return cnt;
    }
};

int main() {
    
return 0;
}   