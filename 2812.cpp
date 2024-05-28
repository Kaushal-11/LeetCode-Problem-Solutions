#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<int> rowDir = {-1, 1, 0, 0};
    vector<int> colDir = {0, 0, -1, 1};
    
    bool valid(vector<vector<bool>> &visited, int i, int j){
        if(i < 0 || j < 0 || i == visited.size() || j == visited[0].size() || visited[i][j])
            return false;
        return true;
    }

    bool isSafe(vector<vector<int>> &dist, int safeDist){
        int n = dist.size();
        queue<pair<int,int>> q;
        if(dist[0][0] < safeDist) return false;
        q.push({0,0});

        vector<vector<bool>> visited(n, vector<bool>(n, false));
        visited[0][0] = true;

        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            if(row ==n-1&& col == n-1) return true;
            for (int k = 0; k < 4; k++){
                int adj_row = row + rowDir[k];
                int adj_col = col + colDir[k];

                if(valid(visited, adj_row, adj_col)){
                    if(dist[adj_row][adj_col] < safeDist) continue;
                    visited[adj_row][adj_col] = true;
                    q.push({adj_row, adj_col});
                }
            }
        }
        return false;
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        vector<vector<int>> dist(n, vector<int>(n, -1));
    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(grid[i][j] == 1){
                    visited[i][j] = true;
                    q.push({i,j});
                }
            }
        }
        
        int len = 0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                dist[row][col] = len;
                for (int k = 0; k < 4; k++)
                {
                    int adj_row = row + rowDir[k];
                    int adj_col = col + colDir[k];

                    if(!valid(visited, adj_row, adj_col))
                        continue;

                    visited[adj_row][adj_col] = true;
                    q.push({adj_row, adj_col});
                }
            }
            len++;
        }
        
        int low = 0, high = len;
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(isSafe(dist, mid)){
                ans = mid;
                low = mid+1;
            }
            else
                high = mid-1;
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,0,0,1},{0,0,0,0},{0,0,0,0},{1,0,0,0}};
    cout<<s.maximumSafenessFactor(grid)<<endl;
return 0;
}