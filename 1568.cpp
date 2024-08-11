#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n, m;

    void DFS(vector<vector<int>> &grid, int i, int j, vector<vector<bool>> &visited){
        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0 || visited[i][j])
            return;

        visited[i][j] = true;

        DFS(grid, i+1, j, visited);
        DFS(grid, i-1, j, visited);
        DFS(grid, i, j+1, visited);
        DFS(grid, i, j-1, visited);
    }

    int numIsland(vector<vector<int>> &grid, vector<vector<bool>> &visited){
        for(auto &row : visited)
            fill(row.begin(), row.end(), false);

        int cnt = 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    DFS(grid, i, j, visited);
                    cnt++;
                }
            }            
        }
        return cnt;
    }

    int minDays(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        int island_cnt = numIsland(grid, visited);
        if(island_cnt > 1 || island_cnt == 0)
            return 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    grid[i][j] = 0;
                    if(numIsland(grid, visited) != 1)
                        return 1;
                    grid[i][j] = 1;
                }
            }                
        }            
        return 2;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,1,1,0},{0,1,1,0},{0,0,0,0}};
    cout << s.minDays(grid) << endl;
    return 0;
}
