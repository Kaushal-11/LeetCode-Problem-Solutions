#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
        if(grid[0][1] > 1 && grid[1][0] > 1)
            return -1;

        int m = grid.size();
        int n = grid[0].size();
        int dirX[4] = {-1,0,1,0};
        int dirY[4] = {0,1,0,-1};
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        pq.push({grid[0][0], 0, 0});
        while(!pq.empty()) {
            int currTime = pq.top()[0];
            int row = pq.top()[1];
            int col = pq.top()[2];
            pq.pop();

            if(row == m-1 && col == n-1)
                return currTime;

            if(visited[row][col])
                continue;
            visited[row][col] = true;

            for(int i = 0; i < 4; i++){
                int nr = row + dirX[i];
                int nc = col + dirY[i];

                if (nr < 0 || nr >= m || nc < 0 || nc >= n || visited[nr][nc])
                    continue;
                    
                int waitTime = (grid[nr][nc] - currTime) % 2 == 0 ? 1 : 0;
                int nextTime = max(currTime + 1, grid[nr][nc] + waitTime);
                pq.push({nextTime, nr, nc});
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,1,2,3}, {4,2,1,6}, {3,2,4,1}};
    cout<<s.minimumTime(grid);
    return 0;
}
