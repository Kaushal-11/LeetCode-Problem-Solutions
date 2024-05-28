#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n,m;

    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0)
            return 0;
        
        int sum = 0;
        sum += grid[i][j];
        int temp = grid[i][j];
        grid[i][j] = 0;

        int d = dfs(grid, i+1, j);
        int u = dfs(grid, i-1, j);
        int r = dfs(grid, i, j+1);
        int l = dfs(grid, i, j-1);

        sum += max(max(d,u),max(l,r));

        grid[i][j] = temp;

        return sum;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int goldSum = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(grid[i][j] != 0){
                    int gold = dfs(grid,i,j);
                    goldSum = max(goldSum, gold);
                }
            }
        }
        return goldSum;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,6,0},{5,8,7},{0,9,0}};
    cout<<s.getMaximumGold(grid)<<endl;
return 0;
}