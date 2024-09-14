#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result(m, vector<int>(n));
        if(m*n != original.size())
            return {};
        
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                result[i][j] = original[k];
                k++;
            }            
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> original = {1,2,3,4};
    int m = 2, n= 2;
    vector<vector<int>> result = s.construct2DArray(original, m, n);
    for(auto it : result){
        for(int x : it)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
