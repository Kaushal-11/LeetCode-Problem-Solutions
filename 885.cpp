#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> directions = {{0,1}, {1, 0}, {0, -1}, {-1, 0}};
        vector<vector<int>> ans;
        int step = 0, dir = 0;
        ans.push_back({rStart, cStart});

        while(ans.size() < rows*cols) {
            if(dir == 0 || dir == 2)
                step++;
            
            for (int i = 0; i < step; i++)
            {
                rStart += directions[dir][0];
                cStart += directions[dir][1];

                if(rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols)
                    ans.push_back({rStart, cStart});
            }   
            dir = (dir+1) % 4;
        }
        return ans;
    }
};

int main() {
    Solution s;
    int rows = 5, cols = 6, rStart = 1, cStart = 4;
    vector<vector<int>> ans = s.spiralMatrixIII(rows, cols, rStart, cStart);
    for(auto it : ans){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;
}   