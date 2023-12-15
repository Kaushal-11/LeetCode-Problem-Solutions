#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        int n = mat.size();
        int m = mat[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);

        for (int i = 0; i < n; i++)    {
            for (int j = 0; j < m; j++){
                row[i] += mat[i][j];
                col[j] += mat[i][j];
            }
        }

        for (int i = 0; i < n; i++)    {
            for (int j = 0; j < m; j++){
                if(mat[i][j] == 1 && row[i] == 1 && col[j] == 1)
                    ans++;
            }
        }

        return ans;        
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1,0,0},{0,1,0},{0,0,1}};
    cout<<s.numSpecial(matrix);
return 0;
}   