#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(grid[i][0] == 0){
                for (int j = 0; j < m; j++)
                {
                    if(grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }

        ans += (n * (1 << m-1));

        for (int j = 1; j < m; j++)
        {
            int one = 0, zero = 0;
            for (int i = 0; i < n; i++)
            {
                if(grid[i][j] == 1)
                    one++;
                else
                    zero++;
            }
            ans += (max(one, zero) * (1 << m-j-1));
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    cout<<s.matrixScore(grid)<<endl;
return 0;
}   