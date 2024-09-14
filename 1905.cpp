#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkGrid(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j){
        if(i < 0 || i >= grid1.size() || j < 0 || j >= grid1[0].size())
            return true;
        
        if(grid2[i][j] != 1)
            return true;
        
        grid2[i][j] = -1;

        bool result = (grid1[i][j] == 1);
        result = result & checkGrid(grid1, grid2, i+1, j);
        result = result & checkGrid(grid1, grid2, i-1, j);
        result = result & checkGrid(grid1, grid2, i, j+1);
        result = result & checkGrid(grid1, grid2, i, j-1);

        return result;
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int cnt = 0;
        int n = grid2.size();
        int m = grid2[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(grid2[i][j] == 1 && checkGrid(grid1, grid2, i, j))
                    cnt++;
            }            
        }        
        return cnt;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid1 = {{1,1,1,0,0},{0,1,1,1,1},{0,0,0,0,0},{1,0,0,0,0},{1,1,0,1,1}}, 
    grid2 = {{1,1,1,0,0},{0,0,1,1,1},{0,1,0,0,0},{1,0,1,1,0},{0,1,0,1,0}};
    cout<<s.countSubIslands(grid1, grid2);
    return 0;
}
