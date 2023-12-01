#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int area = 0;
        int row = matrix.size();
        int col = matrix[0].size();

        for (int i = 1; i < row; i++){
            for (int j = 0; j < col; j++){
                if(matrix[i][j] == 1)
                    matrix[i][j] = matrix[i-1][j] + 1;
            }
        }
        
        for (int i = 0; i < row; i++){
            sort(matrix[i].begin(),matrix[i].end());
            for(int j = 0; j < col ; j++){
                area = max(area, (col - j)*matrix[i][j]);
            }
        }
        return area;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{0,0,1},{1,1,1},{1,0,1}};
    cout<<s.largestSubmatrix(matrix);
return 0;
}   