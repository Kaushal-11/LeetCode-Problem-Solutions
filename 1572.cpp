#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = n / 2;
        int sum = 0;
        
        if(n == 1){
            return mat[0][0];
        }

        for (int i = 0; i < n; i++)
        {
            sum = sum + mat[i][i];
            sum = sum + mat[i][n-i-1];
        }

        if(n % 2 == 1){
            sum = sum - mat[m][m];
        }
        
    return sum;
    }
};

int main() {
    vector<vector<int>> mat = { {6,3,1,10,7,4},
                                {4,10,1,9,5,10},
                                {5,5,7,3,8,5},
                                {2,7,6,4,7,6},
                                {7,9,6,1,8,5},
                                {1,7,9,5,8,4}} ;
    Solution s;
    cout<<s.diagonalSum(mat);
return 0;
}