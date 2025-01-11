#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int m = grid.size();  
        int n = grid[0].size();
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            int prev = grid[0][i];
            int temp = 0;            
            for (int j = 1; j < m; j++) {
                int curr = grid[j][i];
                if (curr <= prev) {
                    int inc = prev - curr + 1;
                    temp += inc;
                    curr = prev + 1;
                }
                prev = curr;
            }
            cnt += temp;
        }        
        return cnt;
    }
};
int main() {
    Solution s;
    vector<vector<int>> grid = {{3,2},{1,3},{3,4},{0,1}};
    cout<<s.minimumOperations(grid);
    return 0;
}
