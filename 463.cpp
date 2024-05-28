#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(grid[row][col]){
                    int l = (col == 0 ? 1 : grid[row][col-1] == 0);
                    int r = (col == m-1 ? 1 : grid[row][col+1] == 0);
                    int u = (row== 0 ? 1 : grid[row-1][col] == 0);
                    int d = (row== n-1 ? 1 : grid[row+1][col] == 0);
                    ans = ans + l + r + u + d;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    cout<<s.islandPerimeter(grid)<<endl;
return 0;
}   