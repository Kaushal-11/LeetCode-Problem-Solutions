#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                if(matrix[i][j] == 0)
                    v.push_back({i, j});
        }
        
        for(auto it : v)
        {
            for(int i = 0; i < n; i++)
                matrix[i][it.second] = 0;
            
            for(int j = 0; j < m; j++)
                matrix[it.first][j] = 0;
        }
    }
};

int main() {
    vector<vector<int>> v = {{1,1,1},{1,0,1},{1,1,1}};
    Solution s;
    s.setZeroes(v);

return 0;
}   