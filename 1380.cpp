#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> result, maxis, minis;
        int n = matrix.size();
        int m = matrix[0].size();
        int mini = INT_MAX, maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            mini = *min_element(matrix[i].begin(),matrix[i].end());
            minis.push_back(mini);
        }
        
        for (int j = 0; j < m; j++)
        {
            maxi = matrix[0][j];
            for (int i = 1; i < n; i++)
            {
                if(maxi < matrix[i][j])
                    maxi = matrix[i][j];    
            }           
            maxis.push_back(maxi);
        }

        for (int i = 0; i < minis.size(); i++)
        {
            for (int j = 0; j < maxis.size(); j++)
            {
                if(minis[i] == maxis[j])
                    result.push_back(minis[i]);
            }
            
        }
        
        return result;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{3,7,8},{9,11,13},{15,16,17}};
    vector<int> ans = s.luckyNumbers(matrix);
    for(int x : ans)
        cout<<x<<" ";
return 0;
}   