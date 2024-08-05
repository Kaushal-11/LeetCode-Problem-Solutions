#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();
        vector<vector<int>> matrix(n, vector<int>(m,0));

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(rowSum[i] == 0 || colSum[j] == 0)
                    matrix[i][j] = 0;
                else{
                    matrix[i][j] = min(rowSum[i], colSum[j]);
                    rowSum[i] -= matrix[i][j];
                    colSum[j] -= matrix[i][j];
                }
            }   
        }      
        return matrix;  
    }
};


int main() {
    Solution s;
    vector<int> rowSum = {3,8}, colSum = {4,7};
    vector<vector<int>> matrix = s.restoreMatrix(rowSum, colSum);
    for(auto it : matrix){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;
}   