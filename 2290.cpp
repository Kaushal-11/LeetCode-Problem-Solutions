#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isvalid(int i, int j, int n, int m){
        return i>=0 && i<n && j>=0 && j<m;
    }
    int minimumObstacles(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> v(n, vector<int>(m, 1e9));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>q;
        v[0][0] = grid[0][0];
        q.push({v[0][0], {0, 0}});
        while(!q.empty()){
            int wt=q.top().first, x=q.top().second.first, y=q.top().second.second;
            q.pop();
            int r[4] = {1, 0, -1, 0};
            int c[4] = {0, 1, 0, -1};
            for(int i=0; i<4; i++){
                int row=r[i]+x, col=c[i]+y;
                if(isvalid(row, col, n, m)){
                    if(wt+grid[row][col]<v[row][col]){
                        v[row][col]=grid[row][col]+wt;
                        q.push({v[row][col], {row, col}});
                    }
                }
            }
        }
        return v[n-1][m-1];
    }
};
int main() {
    
    return 0;
}
