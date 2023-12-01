#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        if(grid.size()==1 && grid[0].size()==1)
            return grid[0][0];
        for(int i = 0 ; i < grid.size(); i++){
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i = grid[0].size()-1; i >= 0 ;i--){
            int maxi = INT_MIN;
            for(int j = 0; j < grid.size();j++){
                maxi = max(maxi,grid[j][i]);
            }
            ans += maxi;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{1,2,4},{3,3,1}};
    cout<<s.deleteGreatestValue(grid);
return 0;
}   