#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size(), m = matrix[0].size();
        int l = 0, r = m-1, top = 0, bottom = n-1; 
        while(l <= r && top <= bottom) {
            for(int i = l; i <= r; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][r]);
            }
            r--;
            if(top <= bottom){
                for(int i = r; i >= l; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(l <= r){
                for(int i = bottom;i >= top; i--) {
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = s.spiralOrder(matrix);
    for(int x : ans)
        cout<<x<<" ";
return 0;
}