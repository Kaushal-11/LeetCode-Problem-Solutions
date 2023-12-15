#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> ans(row,vector<int>(col,0));
        vector<int> onesRow(row,0);
        vector<int> onesCol(col,0);
        vector<int> zerosRow(row,0);
        vector<int> zerosCol(col,0);
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if(grid[i][j]==1){
                    onesRow[i]++;
                    onesCol[j]++;
                }
                else{
                    zerosRow[i]++;
                    zerosCol[j]++;
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                ans[i][j] = onesRow[i]+onesCol[j]-zerosRow[i]-zerosCol[j];
            }
        }
        
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,1,1},{1,0,1},{0,0,1}};
    vector<vector<int>> ans;
    ans = s.onesMinusZeros(grid);
    for(int i = 0 ; i < ans.size();i++){
        for(int j = 0 ; j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}   