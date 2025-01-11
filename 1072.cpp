#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int col = matrix[0].size();
        int ans = 0;

        for(auto& row : matrix){
            vector<int> flip(col);
            int temp = 0;
            for (int j = 0; j < col; j++){
                flip[j] = 1 - row[j];
            }
            
            for(auto& compare : matrix){
                if(compare == row || compare == flip)
                    temp++;
            }

            ans = max(ans, temp);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{0,0,0},{0,0,1},{1,1,0}};
    cout<<s.maxEqualRowsAfterFlips(matrix);    
    return 0;
}
