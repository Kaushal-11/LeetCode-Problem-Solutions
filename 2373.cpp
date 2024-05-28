#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n - 2, vector<int>(n - 2));

        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                int maxi = 0;
                for (int k = i; k <= i + 2; k++) {
                    for (int l = j; l <= j + 2; l++) {
                        maxi = max(grid[k][l], maxi);
                    }
                }
                ans[i][j] = maxi;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};
    vector<vector<int>> ans = s.largestLocal(grid);
    for(auto it : ans){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;
}   